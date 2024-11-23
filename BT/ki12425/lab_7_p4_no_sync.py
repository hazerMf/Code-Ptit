import threading
import time

NUM_PHILOSOPHERS = 5

chopsticks = [threading.Lock() for _ in range(NUM_PHILOSOPHERS)]

def philosopher(id):
    while True:
        print(f"Philosopher {id} is thinking.")
        time.sleep(0.5)

        print(f"Philosopher {id} is hungry.")
        left_chopstick = id
        right_chopstick = (id + 1) % NUM_PHILOSOPHERS

        chopsticks[left_chopstick].acquire()
        print(f"Philosopher {id} picked up left chopstick {left_chopstick}.")

        time.sleep(2)

        chopsticks[right_chopstick].acquire()
        print(f"Philosopher {id} picked up right chopstick {right_chopstick}.")

        print(f"Philosopher {id} is eating.")
        time.sleep(1)

        chopsticks[left_chopstick].release()
        print(f"Philosopher {id} put down left chopstick {left_chopstick}.")

        chopsticks[right_chopstick].release()
        print(f"Philosopher {id} put down right chopstick {right_chopstick}.")

def main():
    threads = []
    
    for i in range(NUM_PHILOSOPHERS):
        thread = threading.Thread(target=philosopher, args=(i,))
        threads.append(thread)
        thread.start()

    for thread in threads:
        thread.join()

if __name__ == "__main__":
    main()
