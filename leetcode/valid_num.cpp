//
//  valid_num.cpp
//  leetcode
//
//  Created by KENAN YANG on 26/6/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "valid_num.hpp"

bool Solution::isNumber(string s){
    enum input_type {
        invalid, space, digit, dot, exp, sign
    };
    
    int trans_table[10][6] = {
        {-1, 0, 1, 2,-1, 4}, //state0: beginning state or start with space
        {-1, 7, 1, 8, 3,-1}, //state1: get digits in previous states or start with digit
        {-1,-1, 6,-1,-1,-1}, //state2: start with '.'
        {-1,-1, 5,-1,-1, 9}, //state3: get 'e' or 'E' right in previous state
        {-1,-1, 1, 2,-1,-1}, //state4: start with sign
        {-1, 7, 5,-1,-1,-1}, //state5: in exponential mode
        {-1, 7, 6,-1, 3,-1}, //state6: in digital mode
        {-1, 7,-1,-1,-1,-1}, //state7: ending with space
        {-1, 7, 6,-1, 3,-1}, //state8: get '.' right in previous state but not start with '.'
        {-1,-1, 5,-1,-1,-1}  //state9: special next_state for an exp followed by sign
        
    };
    int state = 0; //beginning state
    input_type it;
    for(char c : s){
        if(c == ' ') it = space;
        else if(isdigit(c)) it = digit;
        else if(c == '.') it = dot;
        else if(c == 'e' || c == 'E') it = exp;
        else if(c == '+' || c == '-') it = sign;
        else it = invalid;
        
        state = trans_table[state][it];
        if(state == -1) return false;
    }
    
    
    return state == 1 || state == 8|| state == 5 || state == 6 || state == 7;
}
