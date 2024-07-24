/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2*/

//! moore voting Algorithm

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int cnt = 0;
        int el;

        for(int i = 0 ; i < nums.size() ; i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }

            else if(nums[i] == el){
                cnt++;
            }

            else{
                cnt--;
            }
        }

        return el;
        
    }
};

//?here only use the algorithm code as problem says that always exist a majority element if not say the use a loop to backup check 
//?if always exist majority element or not

