////
////  4_6.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 9..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  소인수 분해 프로그램
////
//
#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num);

int main(void) {
    int n, original;

    scanf("%d", &original);
    n = original;

    if(original <= 1) {
        printf("1이하의 수는 소인수 분해할 수 없습니다.\n");
    } else if(isPrime(original)) {
        printf("소수는 소인수 분해할 수 없습니다.\n");
    } else {
        for(int i = 2 ; i <= original ; i++) {
            if(n % i == 0) {
                printf("%d\n", i);
                n /= i;
                i--;
            }
        }
    }
    return 0;
}

bool isPrime(int num) {
    for(int i = 2 ; i <= num ; i++) {
        if(i == num) {
            return true;
        }
        if(num % i == 0) {
            return false;
        }
    }

    return false; //not reached
}