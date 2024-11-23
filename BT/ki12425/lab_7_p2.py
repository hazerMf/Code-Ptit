from multiprocessing import Process, Value
from time import sleep

class TestAndSetLock:
    def __init__(self):
        self.lock = Value('i', 0) 

    def acquire(self):
        while True:
            with self.lock.get_lock():
                if self.lock.value == 0:
                    self.lock.value = 1
                    break

    def release(self):
        with self.lock.get_lock(): 
            self.lock.value = 0

def increment_without_lock(counter, iterations=100):
    for _ in range(iterations):
        counter.value += 1 
        sleep(0.005)


def increment_with_lock(counter, lock, iterations=100):
    for _ in range(iterations):
        lock.acquire()
        counter.value += 1  
        lock.release()
        sleep(0.005)

if __name__ == "__main__":
    counter_without_lock = Value('i', 0)
    counter_with_lock = Value('i', 0)

    tas_lock = TestAndSetLock()

    processes = []
    for _ in range(4):
        p = Process(target=increment_without_lock, args=(counter_without_lock, 100))
        processes.append(p)
        p.start()

    for p in processes:
        p.join()

    print(f"Final Counter Value without synchronization: {counter_without_lock.value}")

    processes = []
    for _ in range(4):
        p = Process(target=increment_with_lock, args=(counter_with_lock, tas_lock, 100))
        processes.append(p)
        p.start()

    for p in processes:
        p.join()

    print(f"Final Counter Value with Test-and-Set lock: {counter_with_lock.value}")
    
