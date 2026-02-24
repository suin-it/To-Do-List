#include <stdio.h>
#include "todo.h"

int loadFromFile(Task *list) {
    FILE *fp = fopen("todo.txt", "r");
    if (fp == NULL) return 0;

    int count = 0;

    while (count < MAX_TASKS &&
           fscanf(fp, "%d %d\n", &list[count].id, &list[count].completed) == 2) {
        if (fgets(list[count].description, DESC_LEN, fp) == NULL) break;
        trim_newline(list[count].description);
        count++;
    }

    fclose(fp);
    return count;
}