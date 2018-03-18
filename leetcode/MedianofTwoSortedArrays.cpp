//
//  MedianofTwoSortedArrays.cpp
//  leetcode
//
//  Created by KENAN YANG on 18/3/18.
//  Copyright © 2018 KENAN YANG. All rights reserved.
//

#include "MedianofTwoSortedArrays.hpp"
#include <vector>

using namespace std;

double MedianofTwoSortedArrays::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans;
    int min1 = 0;
    int max1 = (int)nums1.size();
    int max2 = (int)nums2.size();
    if (max1 > max2){
        swap(nums1, nums2);
        max1 = (int)nums1.size();
        max2 = (int)nums2.size();
    }
    int index1 = 0;
    int index2 = 0;
    int leftMax = 0;
    int rightMin = 0;
    while(1){
        index1 = (min1+max1)/2;
        index2 = (max1+max2+1)/2-index1;
        if (index1 == 0) leftMax = nums2[index2-1];
        else if (index2 == 0) leftMax = nums1[index1-1];
        else leftMax = max(nums1[index1-1], nums2[index2-1]);
        if (index1 == max1) rightMin = nums2[index2];
        else if (index2 == max2) rightMin = nums1[index1];
        else rightMin = min(nums1[index1], nums2[index2]);
        if (rightMin >= leftMax){
            ans = (rightMin+leftMax)/2;
            return ans;
        }
    }
}
double MedianofTwoSortedArrays::findMedianSortedArrays(int A[], int m, int B[], int n) {
    if (m > n) return findMedianSortedArrays(B, n, A, m);
    int minidx = 0, maxidx = m, i, j, num1, mid = (m + n + 1) >> 1,num2;
    while (minidx <= maxidx)
    {
        i = (minidx + maxidx) >> 1;
        j = mid - i;
        if (i<m && j>0 && B[j-1] > A[i]) minidx = i + 1;
        else if (i>0 && j<n && B[j] < A[i-1]) maxidx = i - 1;
        else
        {
            if (i == 0) num1 = B[j-1];
            else if (j == 0) num1 = A[i - 1];
            else num1 = max(A[i-1],B[j-1]);
            break;
        }
    }
    if (((m + n) & 1)) return num1;
    if (i == m) num2 = B[j];
    else if (j == n) num2 = A[i];
    else num2 = min(A[i],B[j]);
    return (num1 + num2) / 2.;
}
