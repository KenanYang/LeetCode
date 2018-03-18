//
//  LengthOfLongestSubString.cpp
//  leetcode
//
//  Created by KENAN YANG on 17/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "LengthOfLongestSubString.hpp"
#include<string>
#include<unordered_map>
#include<iostream>
using namespace std;
int LengthOfLongestSubString::lengthOfLongestSubstring(string s){
    int maxLength = 0;
    int index1 = 0;
    int index2 = 1;
    if(s.empty()) return maxLength;
    unordered_map<char,int> mymap;
    unordered_map<char,int>::iterator it;
    string substring;
    mymap[s.at(index1)] = index1;
    for (;index2<s.length();++index2){
        
        
        it = mymap.find(s.at(index2));
        if(it != mymap.end()){
            
            
            mymap.erase(it, mymap.end());
            mymap.insert(pair<char,int>(s.at(index2), index2));
            index1 = it->second;
            index1++;
            
        }else{
            mymap.insert(pair<char,int>(s.at(index2), index2));
        }
        maxLength = (maxLength > (index2 - index1)) ? maxLength:(index2-index1);
    }
    return maxLength;
}
