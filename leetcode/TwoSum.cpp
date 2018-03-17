//
//  TwoSum.cpp
//  leetcode
//
//  Created by KENAN YANG on 17/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "TwoSum.hpp"

#include <vector>
#include<iostream>
using namespace std;

vector<int> TwoSum::twoSum(vector<int>& nums, int target){
    vector<int> solution;
    vector<int>::iterator it = nums.begin();
    int i = 0, j = 0;
    for (;(it+i+1) != nums.end();i++){
        for (j = i+1; (it+j) != nums.end();j++){            
            if((*(it+i))+(*(it+j)) == target){
                solution.push_back(i);
                solution.push_back(j);
                return solution;
            }
        }
    }
    solution.push_back(-1);
    solution.push_back(-1);
    return solution;
}
