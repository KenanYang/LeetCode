//
//  LengthOfLongestSubString.cpp
//  leetcode
//
//  Created by KENAN YANG on 17/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "LengthOfLongestSubString.hpp"
#include<string>
//#include<unordered_map>
#include<iostream>
using namespace std;
int LengthOfLongestSubString::lengthOfLongestSubstring(string s){
    int ans = 0, left = 0, len = s.length();
    int last[255];
    memset(last, -1, sizeof(last));
    
    if(len == 0){
        ans = 0;
    }
    
    for (int i = 0; i < len; i++) {
        
        if (last[s[i]] >= left) left = last[s[i]]+1;
        last[s[i]] = i;
        
        ans = max(ans, i - left + 1);
    }
    return ans;
}
