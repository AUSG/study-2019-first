////
////  4_5.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 9..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  알러지가 심한 친구들 
////
//
#include <iostream>
#include <vector>

using namespace std;
const int M = 6;
const int N = 4;
const int INF = 987654321;
const int arr[N][M] = {
    {0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1},
    {1, 0, 1, 0, 1, 0},
    {1, 1, 0, 0, 0, 1}
};

bool canEveryoneEat(vector<int>& menu);
int selectMenu(vector<int>& menu, int food);

int main(void) {
    vector<int> menu;
    
    printf("%d\n", selectMenu(menu, 0));
    return 0;
}

bool canEveryoneEat(vector<int>& menu) {
    int result[N] = {0,};
    
    for(vector<int>::iterator iter = menu.begin(); iter != menu.end(); ++iter){
        for(int i = 0; i < N; i++) {
            result[i] += arr[i][*iter];
        }
    }
    for(int i = 0; i < N; i++) {
        if(result[i] == 0) {
            return false;
        }
    }
    return true;
}

int selectMenu(vector<int>& menu, int food) {
    if(food == M-1) {
        if(canEveryoneEat(menu)) return menu.size();
        
        return INF;
    }
    
    int notIncluded = selectMenu(menu, food+1);
    menu.push_back(food);
    int included = selectMenu(menu, food+1);
    menu.pop_back();
    
    return notIncluded > included ? included : notIncluded;
}