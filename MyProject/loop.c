//
//  loop.c
//  MyProject
//
//  Created by Nayomi on 2021/09/30.
//

#include <stdio.h>

int main_loop(void) {
    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    printf("\n\n");
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = i; j < 4; j++) {
//            printf(" ");
//        }
//        for (int k = 0; k <= i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    /*
     
     SSSS*
     SSS***
     SS*****
     S*******
     *********
     */
    
    
    
    // 피라미드를 쌓아라 프로젝트
    int floor;
    printf("몇 층으로 쌓을까요? ");
    scanf("%d", &floor);
    for (int i = 0; i < floor; i++) {
        for (int j = i; j < floor - 1; j++){
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
