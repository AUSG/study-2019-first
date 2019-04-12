////
////  Boggle.cpp
////  playground
////
////  Created by yebonkim on 2019. 3. 25..
////  Copyright © 2018년 yebonkim. All rights reserved.
////  Boggle Game
////
//
#include <iostream>
#include <vector>
#define N 5

using namespace std;

bool isWord(int i, int j, vector<int> word, int toFindWord);

char* words[] = {
    "PRETTY",
    "GIRL",
    "REPEAT"
};

char board[N][N] = {
    {'U', 'R', 'L', 'P', 'M'},
    {'X', 'P', 'R', 'E', 'T'},
    {'G', 'I', 'A', 'E', 'T'},
    {'X', 'T', 'N', 'Z', 'Y'},
    {'X', 'O', 'Q', 'R', 'S'}
};

int main(void) {
    vector<int> word;
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 3; k++) {
                word.clear();
                for(int l = 0; l < strlen(words[k]); l++) {
                    word.push_back(words[k][l]);
                }
                isWord(i, j, word, k);
            }
        }
    }
    return 0;
}

bool isWord(int i, int j, vector<int> word, int toFindWord) {
    if(word.size() == 0) {
        printf("%s (%d, %d)\n", words[toFindWord], i, j);
        return true;
    }
    
    for(int ii = -1; ii < 2; ii++) {
        for(int jj = -1; jj < 2; jj++) {
            if((i + ii < 0 || i + ii > 4) || (j + jj < 0 || j + jj > 4)) {
                
            } else if(word[word.size() - 1] == board[i + ii][j + jj]) {
                word.pop_back();
                return isWord(i + ii, j + jj, word, toFindWord);
            }
        }
    }
    return false;
}
