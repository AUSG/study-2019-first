////
////  BOJ_2869.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 12..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  달팽이는 올라가고 싶다
////
//
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int a, b, v, diff;
    
    scanf("%d %d %d", &a, &b, &v);
    diff = a - b;
    
    int pre = (v - a) / diff;
    
    if (pre * diff + a >= v)
        printf("%d", pre + 1);
    else
        printf("%d", pre + 2);
    
    return 0;
}
