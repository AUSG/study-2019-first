////
////  RecursiveCombination.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 25..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  n 개의 원소 중 m개의 원소를 고르는 모든 조합을 찾는 알고리즘
////  재귀함수를 통해
////
//
#include <iostream>
#include <vector>

using namespace std;

void makeCombination(int a, int b, vector<int> comb);
void printAll(vector<int> comb);

int main(void) {
    int a = 8;
    int b = 5;
    vector<int> comb{0,};
    
    makeCombination(a, b, comb);
    
    return 0;
}

void makeCombination(int a, int b, vector<int> comb) {
    if(comb.size() == b) {
        printAll(comb);
        return;
    }
    for(int i = comb[comb.size() - 1] + 1; i < a; i++) {
        comb.push_back(i);
        makeCombination(a, b, comb);
        comb.pop_back();
    }
}

void printAll(vector<int> comb) {
    for(auto iter = comb.begin() + 1; iter != comb.end(); ++iter) {
        printf("%d ", *iter);
    }
    puts("");
}
