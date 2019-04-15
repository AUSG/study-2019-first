////
////  BOJ_2748.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 15..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  피보나치 수2
////
//
#include <iostream>
#include <vector>
#include <algorithm>

long long fibo(long long num);
long long fiboArr[91];

int main(void) {
    int num;
    
    for(int i = 0; i < 91; i++) {
        fiboArr[i] = -1;
    }
    fiboArr[0] = 0;
    fiboArr[1] = 1;
    fiboArr[2] = 1;
    
    scanf("%d", &num);
    printf("%lld", fibo(num));
    
    return 0;
}

long long fibo(long long num) {
    if(fiboArr[num] != -1)
        return fiboArr[num];
    
    fiboArr[num] = fibo(num - 1) + fibo(num - 2);
    
    return fiboArr[num];
}
