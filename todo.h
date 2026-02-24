#ifndef TODO_H // 1. TODO_H가 정의되어 있지 않다면,
#define TODO_H // 2. TODO_H를 정의하고, 아래 내용을 포함시킨다.

#define MAX_TASKS 100
#define DESC_LEN 100

typedef struct {
    int id;
    char description[DESC_LEN];
    int completed;   // 0: 미완료, 1: 완료
} Task;

void trim_newline(char *str);

int loadFromFile(Task *list);
void saveToFile(Task *list, int count);

void add_task(Task *list, int *count);
void delete_task(Task *list, int *count);
void toggle_task(Task *list, int count);
void display_list(Task *list, int count);

#endif