////
////  BOJ_2747.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 15..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  피보나치 수
////
//
#include <iostream>
#include <vector>
#include <algorithm>

int fibo(int num);
int fiboArr[46];

int main(void) {
    int num;
    
    for(int i = 0; i < 46; i++) {
        fiboArr[i] = -1;
    }
    fiboArr[0] = 0;
    fiboArr[1] = 1;
    fiboArr[2] = 1;
    
    scanf("%d", &num);
    printf("%d", fibo(num));
    
    return 0;
}

int fibo(int num) {
    if(fiboArr[num] != -1)
        return fiboArr[num];
    
    fiboArr[num] = fibo(num - 1) + fibo(num - 2);
    
    return fiboArr[num];
}
