#include <stdio.h>
#include "todo.h"

void saveToFile(Task *list, int count) {
  FILE *fp = fopen("todo.txt", "w");
  if (fp == NULL) return;

  for (int i = 0; i < count; i++) {
    fprintf(fp, "%d %d\n%s\n",
            list[i].id,
            list[i].completed,
            list[i].description);
  }

  fclose(fp);
}