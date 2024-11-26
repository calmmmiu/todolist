#include <iostream>
#include <thread>
#include <chrono>
#include "Task.h"
#include "Reminder.h"
#include "Tag.h"
#include "Timer.h"

int main() {
      std::cout << "=== Task Management Application ===\n\n";

    // 1. 创建一个任务
    Task task("Finish Homework", "Complete the math assignment.");
    task.showTaskInfo();

    // 2. 创建并添加提醒
    time_t now = std::time(nullptr);
    Reminder* reminder = new Reminder("Complete by 5 PM", now + 5); // 设置提醒
    task.addReminder(reminder);
    std::cout << "\nReminder added: 'Complete by 5 PM'. Reminder set x hour from now.\n";

    // 3. 创建并添加标签
    Tag* tag = new Tag("Important");
    task.addTag(tag);
    std::cout << "Tag added: 'Important'.\n";

    // 4. 创建计时器并启动
    Timer* timer = new Timer();
    task.startTimer();
    std::cout << "Timer started for task...\n";

    // 5. 模拟任务执行 (使用短时间延迟来模拟任务的进行)
    std::cout << "\nTask is being worked on...\n";
    
    // 6. 停止计时器并显示时间
    task.stopTimer();
    std::cout << "\nTimer stopped.\n";

    // 7. 显示任务信息
    std::cout << "\n=== Task Details ===\n";
    task.showTaskInfo();

    // 清理资源
    delete reminder;
    delete tag;
    delete timer;

    return 0;
}
