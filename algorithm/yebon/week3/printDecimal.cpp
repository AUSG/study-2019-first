////
////  printDecimal.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 16..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  실수 연산없이 분수를 소수로 표현하기
////  순환소수일 경우 무한루프
////
//
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int a = 305935351;
    int b = 100000000;
    // 3/8 = 0.375
    // 4712/400 = 11.78

    printf("%d.", a/b);
    a -= b * (a/b);

    while(a > 0) {
        a *= 10;
        printf("%d", a/b);
        a -= b * (a/b);
    }

    puts("");
    return 0;
}