////
////  BOJ_2805.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 10..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  나무 자르기
////
//
#include <iostream>
#include <vector>

using namespace std;
int binarySearch(int left, int right, int toFind);

vector<int> trees;

int main(void) {
    int num, toFind, max, tree;
    max = -1;
    
    scanf("%d %d", &num, &toFind);
    for(int i = 0; i < num; i++) {
        scanf("%d", &tree);
        trees.push_back(tree);
        if(max < tree) {
            max = tree;
        }
    }
    
    printf("%d", binarySearch(0, max, toFind));
    
    return 0;
}

int binarySearch(int left, int right, int toFind) {
    if(left > right)
        return right;
    
    int mid = (left + right) / 2;
    long long cutTree = 0;
    for(int i = 0; i < trees.size(); i++) {
        if(trees[i] > mid) {
            cutTree += trees[i] - mid;
        }
    }
    
    if(cutTree >= toFind) {
        return binarySearch(mid + 1, right, toFind);
    } else {
        return binarySearch(left, mid - 1, toFind);
    }
}
