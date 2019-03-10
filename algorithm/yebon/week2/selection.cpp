////
////  selection.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 10..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  Selection Sort
////
//
#include <iostream>
#include <vector>

using namespace std;
vector<int> nums{23, 15, 50, 37, 4, 90, 89, 34, 20, 95};

void selectionSort();
void printAll();

int main(void) {
    selectionSort();
    printAll();
    return 0;
}

void selectionSort() {
    int minIdx, tmp;
    for(int i=0; i<nums.size(); i++) {
        minIdx = i;
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[minIdx] > nums[j]) {
                minIdx = j;
            }
        }
        tmp = nums[minIdx];
        nums[minIdx] = nums[i];
        nums[i] = tmp;
    }
}

void printAll() {
    for(auto iter = nums.begin(); iter != nums.end(); ++iter) {
        printf("%d ", *iter);
    }
}