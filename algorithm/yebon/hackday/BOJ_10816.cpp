////
////  BOJ_10816.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 12..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  숫자 카드 2
////
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> cards;
int num;

int minBinarySearch(int left, int right, int toFind);
int maxBinarySearch(int left, int right, int toFind);

int main(void) {
    int num1, card, max, min;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++) {
        scanf("%d", &card);
        cards.push_back(card);
    }
    sort(cards.begin(), cards.end());
    scanf("%d", &num1);
    for(int i = 0; i < num1; i++) {
        scanf("%d", &card);
        max = maxBinarySearch(0, num - 1, card);
        min = minBinarySearch(0, num - 1, card);
        if (max == -1)
            printf("0 ");
        else
            printf("%d ", max - min + 1);
    }
    
    return 0;
}

int minBinarySearch(int left, int right, int toFind) {
    if(left > right) {
        if(cards[left] != toFind) {
            return -1;
        } else {
            return left;
        }
    }
    
    int mid = (left + right) / 2;
    
    if(toFind > cards[mid]) {
        return minBinarySearch(mid + 1, right, toFind);
    } else {
        return minBinarySearch(left, mid - 1, toFind);
    }
}

int maxBinarySearch(int left, int right, int toFind) {
    if(left > right) {
        if(cards[right] != toFind) {
            return -1;
        } else {
            return right;
        }
    }
    
    int mid = (left + right) / 2;
    
    if(toFind >= cards[mid]) {
        return maxBinarySearch(mid + 1, right, toFind);
    } else {
        return maxBinarySearch(left, mid - 1, toFind);
    }
}
