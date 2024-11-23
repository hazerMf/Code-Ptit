from multiprocessing import Process, Semaphore, Value
from time import sleep

def critical_section(semaphore, counter, process_id):
    for _ in range(5):
        print(f"Process {process_id} is trying to enter the critical section.")
        semaphore.acquire()

        print(f"Process {process_id} has entered the critical section.")
        counter.value += 1
        print(f"Counter Value (Process {process_id}): {counter.value}")
        sleep(0.5)
        print(f"Process {process_id} is leaving the critical section.")
        semaphore.release()
        sleep(0.5)

if __name__ == "__main__":
    semaphore = Semaphore(1)

    counter = Value('i', 0)

    processes = []
    for i in range(3): 
        p = Process(target=critical_section, args=(semaphore, counter, i + 1))
        processes.append(p)
        p.start()

    for p in processes:
        p.join()
    
    print(f"Final Counter Value: {counter.value}")
