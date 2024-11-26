#ifndef REMINDER_H
#define REMINDER_H

#include <string>
#include <ctime>

class Reminder {
public:
    Reminder(const std::string& message, time_t dueDate);
    void showReminderInfo() const;

private:
    std::string message;
    time_t dueDate;
};

#endif
