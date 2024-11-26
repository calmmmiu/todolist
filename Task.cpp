#include "Task.h"
#include <iostream>

Task::Task(const std::string& title, const std::string& description)
    : title(title), description(description), reminder(nullptr), timer(nullptr) {}

void Task::addReminder(Reminder* rem) {
    reminder = rem;
}

void Task::addTag(Tag* tag) {
    tags.push_back(tag);
}

void Task::startTimer() {
    if (timer) {
        timer->start();
    }
}
void Task::stopTimer() {
        timer->stop();
    
}

void Task::showTaskInfo() const {
    std::cout << "Task: " << title << "\nDescription: " << description << std::endl;
    if (reminder) {
        reminder->showReminderInfo();
    }
    for (const auto& tag : tags) {
        tag->showTagInfo();
    }
    if (timer) {
        timer->showTimeInfo();
    }
}
