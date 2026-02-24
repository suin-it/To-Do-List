/* ===================== add.c (수정 버전) ===================== */
#include <stdio.h>
#include "todo.h"

void add_task(Task *list, int *count) {
    if (*count >= MAX_TASKS) {
        printf("더 이상 추가할 수 없습니다.\n");
        return;
    }

    while (getchar() != '\n');  // 입력 버퍼 완전히 비우기

    printf("할 일 입력: ");
    if (fgets(list[*count].description, DESC_LEN, stdin) == NULL)
        return;

    trim_newline(list[*count].description);

    list[*count].id = (*count) + 1;
    list[*count].completed = 0;

    (*count)++;
}