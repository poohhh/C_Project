//
//  array.c
//  MyProject
//
//  Created by Nayomi on 2021/10/01.
//

#include <stdio.h>

int main_array(void) {
    // 배열
//    int subway_array[3];    // 배열 크기는 항상 상수로 선언 변수 못넣음
//    subway_array[0] = 30;
//    subway_array[1] = 40;
//    subway_array[2] = 50;
//
//    for (int i = 0; i < 3; i++) {
//        printf("지하철 %d호차에 %d명이 타고 있습니다\n", i+1, subway_array[i]);
//    }
    
    // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함
//    char str[6] = "coding";
//    char str[7] = "coding";
//    printf("%s\n", str);
    
//    char str[] = "coding";
//    printf("%s\n", str);
//    printf("%d\n", sizeof(str));
//
//    for(int i = 0; i < sizeof(str); i++) {
//        printf("%c\n", str[i]);
//    }
    
//    char kor[] = "나도코딩";
//    printf("%s\n", kor);
//    printf("%d\n", sizeof(kor));
    
//    char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0' };
//    printf("%s\n", c_array);
    
//    char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g', '\0' };
////    printf("%s\n", c_array)
//    for (int i = 0; i < sizeof(c_array); i++) {
//        printf("%d\n", c_array[i]); // ASCII 코드 값 출력(null 문자 0으로 출력됨)
//    }
    
    // 참고 : ASCII 코드? ANSI (미국표준협회) 에서 제시한 표준 코드 체계
    // 7bit, 총 128개 코드 (0~127)
    // a : 97 (문자 a의 아스키코드 정수값)
    // A : 65
    // 0 : 48
    
    // 참고 2
    for (int i = 0; i < 128; i++) {
        printf("%c\n", i);
    }
    
    return 0;
}
