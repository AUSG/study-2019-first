////
////  BOJ_1780.cpp
////  playground
////
////  Created by yebonkim on 2019. 4. 10..
////  Copyright © 2019년 yebonkim. All rights reserved.
////  종이의 개수
////
//
#include <iostream>
#include <vector>
#define NOT_SAME -100

using namespace std;

int isSame(vector<vector<int>> map, int size);
void calculate(vector<vector<int>> map, int size);

int zeroCnt = 0;
int posCnt = 0;
int negCnt = 0;
int dx[] = {0, 0, 0, 1, 1, 1, 2, 2, 2};
int dy[] = {0, 1, 2, 0, 1, 2, 0, 1, 2};

int main(void) {
    int num, tmp;
    vector<vector<int>> map;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++) {
        vector<int> row;
        map.push_back(row);
        for(int j = 0; j< num; j++) {
            scanf("%d", &tmp);
            map[i].push_back(tmp);
        }
    }
    
    calculate(map, num);
    
//    for(int i = 0; i < num; i++) {
//        for(int j = 0; j< num; j++) {
//            printf("%d ",map[i][j]);
//        }
//        puts("");
//    }
    
    printf("%d\n", negCnt);
    printf("%d\n", zeroCnt);
    printf("%d\n", posCnt);
    
    return 0;
}

void calculate(vector<vector<int>> map, int size) {
    int s = isSame(map, size);
    
    if(s >= -1 && s <= 1) {
        switch(s) {
            case 0:
                zeroCnt++;
                break;
            case 1:
                posCnt++;
                break;
            case -1:
                negCnt++;
                break;
        }
        return;
    }
    //NOT SAME
    int unit = size / 3;
    
    vector<vector<int>> subMap;
    for(int k = 0; k < 9; k++) {
        for(int i = 0; i < unit; i++) {
            vector<int> row;
            subMap.push_back(row);
            for(int j = 0; j < unit; j++) {
                subMap[i].push_back(map[i + unit * dx[k]][j + unit * dy[k]]);
            }
        }
        calculate(subMap, unit);
        subMap.clear();
    }
        
}

int isSame(vector<vector<int>> map, int size) {
    int firstElement = map[0][0];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(firstElement != map[i][j]) {
                return NOT_SAME;
            }
        }
    }
    
    return firstElement;
}
