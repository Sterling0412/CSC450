#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex for synchronization

void countingUp() {
    for (int i = 1; i <= 20; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Lock the mutex to ensure exclusive access
        std::cout << "Counting Up: " << i << std::endl; // Output the count
    }
}

void countingDown() {
    for (int i = 20; i >= 0; --i) {
        std::lock_guard<std::mutex> lock(mtx); // Lock the mutex for exclusive access
        std::cout << "Counting Down: " << i << std::endl; // Output the count
    }
}

int main() {
    std::thread t1(countingUp); // Create thread for countUp function
    std::thread t2(countingDown); // Create thread for countDown function

    t1.join(); // Wait for t1 to finish
    t2.join(); // Wait for t2 to finish

    return 0;
}