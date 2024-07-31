/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
Example 2:

Input: nums = [-1,1]
Output: [1,-1]
Explanation:
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].*/

//! This is For when Positive == Negative
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int posIndex = 0 , negIndex = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                ans[posIndex] = nums[i];
                posIndex +=2;

            }

            else{
                ans[negIndex] = nums[i];
                negIndex +=2;

            }
        }

        return ans;
        
    }
};

//! When Positive != Negative

/*There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.

Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.

Note:

Start the array with a positive number. 
For example

Input:
A = [1, 2, -4, -5], N = 4
Output:
1 -4  2 -5
Explanation: 
Positive elements = 1, 2
Negative elements = -4, -5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.*/

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.

    vector<int> pos , neg;

    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] > 0){
            pos.push_back(a[i]);

        }

        else{
            neg.push_back(a[i]);
        }
    }

    if(pos.size() > neg.size()){
        for(int i = 0 ; i < neg.size() ; i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }

        int index = neg.size()*2;

        for(int i = neg.size() ; i < pos.size() ; i++){
            a[index] = pos[i];
            index++;
        }
    }

    else{
        for(int i = 0 ; i < pos.size() ; i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }

        int index = pos.size()*2;

        for(int i = pos.size() ; i < pos.size() ; i++){
            a[index] = pos[i];
            index++;
        }
    }

    return a;
}