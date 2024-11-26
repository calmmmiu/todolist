#include "Timer.h"

void Timer::start() {
    isRunning = true;
    startTime = std::time(nullptr);
}

void Timer::stop() {
    if (isRunning) {
        isRunning = false;
        endTime = std::time(nullptr);
    }
}

void Timer::showTimeInfo() const {
    if (isRunning) {
        std::cout << "Timer is still running..." << std::endl;
    } else {
        std::cout << "Time spent: " << difftime(endTime, startTime) << " seconds." << std::endl;
    }
}
