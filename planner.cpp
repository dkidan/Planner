#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string name;
    int start_time;
    int end_time;
};

int main() {
    std::vector<Task> tasks;

    std::string task_name;
    int start_time;
    int end_time;

    // Input breakfast task
    std::cout << "Enter task name: ";
    std::cin >> task_name;
    std::cout << "Enter start time (24-hour format): ";
    std::cin >> start_time;
    std::cout << "Enter end time (24-hour format): ";
    std::cin >> end_time;
    tasks.push_back({task_name, start_time, end_time});

    // Input class task
    std::cout << "Enter task name: ";
    std::cin >> task_name;
    std::cout << "Enter start time (24-hour format): ";
    std::cin >> start_time;
    std::cout << "Enter end time (24-hour format): ";
    std::cin >> end_time;
    tasks.push_back({task_name, start_time, end_time});

    // Input gym task
    std::cout << "Enter task name: ";
    std::cin >> task_name;
    std::cout << "Enter start time (24-hour format): ";
    std::cin >> start_time;
    std::cout << "Enter end time (24-hour format): ";
    std::cin >> end_time;
    tasks.push_back({task_name, start_time, end_time});

    // Input shower task
    std::cout << "Enter task name: ";
    std::cin >> task_name;
    std::cout << "Enter start time (24-hour format): ";
    std::cin >> start_time;
    std::cout << "Enter end time (24-hour format): ";
    std::cin >> end_time;
    tasks.push_back({task_name, start_time, end_time});

    // Input sleep task
    std::cout << "Enter task name: ";
    std::cin >> task_name;
    std::cout << "Enter start time (24-hour format): ";
    std::cin >> start_time;
    std::cout << "Enter end time (24-hour format): ";
    std::cin >> end_time;
    tasks.push_back({task_name, start_time, end_time});

    std::cout << "Task schedule for the day:" << std::endl;
    for (auto task : tasks) {
        std::cout << task.name << " from " << task.start_time << " to " << task.end_time << std::endl;
    }

    return 0;
}
