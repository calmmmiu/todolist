#include "User.h"
#include <iostream>

void User::addTask(const Task& task) {
    tasks.push_back(task);
}

void User::displayTasks() const {
    for (const auto& task : tasks) {
        task.showTaskInfo();
    }
}


