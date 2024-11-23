from multiprocessing import Process, current_process
from time import sleep

def print_numbers():
    for i in range(1, 6):
        print(f"Process {current_process().name}: {i}")
        sleep(0.5)

if __name__ == "__main__":
    process1 = Process(target=print_numbers, name="P1")
    process2 = Process(target=print_numbers, name="P2")

    process1.start()
    process2.start()

    process1.join()
    process2.join()
