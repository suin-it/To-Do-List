#include <stdio.h>
#include "todo.h"

void toggle_task(Task *list, int count) {
    int num;
    printf("완료 상태 변경할 번호: ");
    scanf("%d", &num);

    if (num < 1 || num > count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    int idx = num - 1;
    list[idx].completed = !list[idx].completed;
}