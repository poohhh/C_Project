//
//  condition.c
//  MyProject
//
//  Created by Nayomi on 2021/09/30.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_condition(void) {
    // 가위 바위 보
//    srand(time(NULL));
//    int i = rand() % 3; // 0 ~ 2 반환
//    if (i == 0)
//        printf("가위\n");
//    else if (i == 1)
//        printf("바위\n");
//    else if (i == 2)
//        printf("보\n");
//    else
//        printf("몰라요\n");
    
//    srand(time(NULL));
//    int i = rand() % 3; // 0 ~ 2 반환
//    switch (i) {
//        case 0:
//            printf("가위\n");
//            break;
//        case 1:
//            printf("바위\n");
//            break;
//        case 2:
//            printf("보\n");
//            break;
//        default:
//            printf("몰라요\n");
//            break;
//    }
    
    // Up and Down
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
    printf("숫자 : %d\n", num);
    int answer = 0; // 정
    int chance = 5; // 기회
    while (chance > 0) {
        printf("남은 기회 %d 번\n", chance--);
        printf("숫자를 맞혀보세요 (1-100) : ");
        scanf("%d", &answer);
        
        if (answer > num)
            printf("DOWN ↓\n\n");
        else if (answer < num)
            printf("UP ↑\n\n");
        else if (answer == num) {
            printf("정답입니다 ! \n\n");
            break;
        } else {
            printf("알 수 없는 오류....\n\n");
        }
        
        if (chance == 0) {
            printf("모든 기회를 다 사용하셨네요..아쉽게 실패했습니다\n");
            break;
        }
            
            
    }
    return 0;
}
