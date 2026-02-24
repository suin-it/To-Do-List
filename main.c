#include <stdio.h>
#include "todo.h"

int main(void) {
  Task list[MAX_TASKS];
  int count = loadFromFile(list);

  int running = 1;

  while (running) {
    display_list(list, count);

    printf("\n1. 추가\n2. 삭제\n3. 완료 토글\n4. 종료\n> ");
    
    int cmd;
    if (scanf("%d", &cmd) != 1) {
      while (getchar() != '\n');  // 입력 버퍼 비우기
      continue;
    }

    switch (cmd) {
      case 1:
        add_task(list, &count);
        break;
      case 2:
        delete_task(list, &count);
        break;
      case 3:
        toggle_task(list, count);
        break;
      case 4:
        running = 0;
        break;
      default:
        printf("잘못된 입력입니다\n");
    }
  }
  
  saveToFile(list, count);
  return 0;
}