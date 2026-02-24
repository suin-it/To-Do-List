#include "todo.h"
#include <stdio.h>

void delete_task(Task *list, int *count) {
    int num;
    printf("삭제할 번호: ");
    scanf("%d", &num);

    if (num < 1 || num > *count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    int idx = num - 1;

    for (int i = idx; i < *count - 1; i++) {
        list[i] = list[i + 1];
        list[i].id = i + 1;
    }

    (*count)--;
}