#include <iostream>
#include "TodoList.h"

int main() {
    TodoList list;
    Task testTask("Test Name", "Test Description");

    list.addTask(testTask);
    list.completeTask(testTask);
    if(!list.addTask(testTask))
    {
        cout << "WAS UNABLE TO ADD NEW TASK: " + testTask.display();
    }

    std::vector<Task> resultList = list.resolvedTasks();

    for (auto resultTask: resultList) {
        cout << resultTask.display();
    }
    return 0;
}
