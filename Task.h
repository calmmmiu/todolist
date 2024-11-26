#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>
#include "Reminder.h"
#include "Tag.h"
#include "Timer.h"

class Task {
public:
    Task(const std::string& title, const std::string& description);
    void addReminder(Reminder* reminder);
    void addTag(Tag* tag);
    void startTimer();
    void stopTimer();
    void showTaskInfo() const;

private:
    std::string title;
    std::string description;
    Reminder* reminder; // ÿ������һ������
    std::vector<Tag*> tags; // ÿ����������ǩ
    Timer* timer; // ��ʱ��
};

#endif
