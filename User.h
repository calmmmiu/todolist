#ifndef USER_H
#define USER_H

#include <vector>
#include "Task.h"

class User {
public:
    void addTask(const Task& task);
    void displayTasks() const;
private:
    std::vector<Task> tasks;
};

#endif
