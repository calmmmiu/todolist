#ifndef TIMER_H
#define TIMER_H

#include <ctime>
#include <iostream>

class Timer {
public:
    void start();
    void stop();
    void showTimeInfo() const;

private:
    time_t startTime;
    time_t endTime;
    bool isRunning;
};

#endif
