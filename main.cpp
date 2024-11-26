#include <iostream>
#include <thread>
#include <chrono>
#include "Task.h"
#include "Reminder.h"
#include "Tag.h"
#include "Timer.h"

int main() {
      std::cout << "=== Task Management Application ===\n\n";

    // 1. ����һ������
    Task task("Finish Homework", "Complete the math assignment.");
    task.showTaskInfo();

    // 2. �������������
    time_t now = std::time(nullptr);
    Reminder* reminder = new Reminder("Complete by 5 PM", now + 5); // ��������
    task.addReminder(reminder);
    std::cout << "\nReminder added: 'Complete by 5 PM'. Reminder set x hour from now.\n";

    // 3. ��������ӱ�ǩ
    Tag* tag = new Tag("Important");
    task.addTag(tag);
    std::cout << "Tag added: 'Important'.\n";

    // 4. ������ʱ��������
    Timer* timer = new Timer();
    task.startTimer();
    std::cout << "Timer started for task...\n";

    // 5. ģ������ִ�� (ʹ�ö�ʱ���ӳ���ģ������Ľ���)
    std::cout << "\nTask is being worked on...\n";
    
    // 6. ֹͣ��ʱ������ʾʱ��
    task.stopTimer();
    std::cout << "\nTimer stopped.\n";

    // 7. ��ʾ������Ϣ
    std::cout << "\n=== Task Details ===\n";
    task.showTaskInfo();

    // ������Դ
    delete reminder;
    delete tag;
    delete timer;

    return 0;
}
