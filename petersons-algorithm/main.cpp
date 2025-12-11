#include <iostream>
#include <thread>
#include <vector>

const int N = 2; // Number of threads (two processes)
std::vector<bool> flag(N, false); // Flags to show intent
int turn = 0; // Indicates whose turn it is

void process(int id) {
    int other = 1 - id;
    while (true) {
        // Entry Section
        flag[id] = true;        // Express intent to enter
        turn = other;           // Give priority to the other process
        while (flag[other] && turn == other) {
            // Busy wait until it’s safe to enter
        }

        // Critical Section
        std::cout << "Process " << id << " is in critical section\n";

        // Exit Section
        flag[id] = false;

        // Remainder Section
        std::cout << "Process " << id << " is in remainder section\n";
    }
}

int main() {
    std::thread t1(process, 0);
    std::thread t2(process, 1);

    t1.join();
    t2.join();

    return 0;
}
