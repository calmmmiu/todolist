#include "Reminder.h"
#include <iostream>

Reminder::Reminder(const std::string& message, time_t dueDate)
    : message(message), dueDate(dueDate) {}

void Reminder::showReminderInfo() const {
    std::cout << "Reminder: " << message << " Due: " << ctime(&dueDate);
}


