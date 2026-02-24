#include "todo.h"
#include <stdio.h>

void display_list(Task *list, int count) {
    printf("\n===== To-Do List =====\n");

    if (count == 0) {
        printf("목록이 비어 있습니다.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("%d. [%c] %s\n",
               list[i].id,
               list[i].completed ? 'x' : ' ',
               list[i].description);
    }
}