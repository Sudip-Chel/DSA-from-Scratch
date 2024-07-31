/*A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]*/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        //! For the 1st observation --- get the break part -- 2 1 | 5 4 3 0 0

        int index = -1;

        for(int i = nums.size()-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        //! if it is the last permutation -- and greatest so the next is the first --- like for 5 4 3 2 1 (don't get a break part ) ---> 1 2 3 4 5
        if(index == -1){
            reverse(nums.begin() , nums.end());
            return;
        }


        //! swap with the nearest greatest element -- 2 1 | 5 4 3 0 0 --> 2 3 | 5 4 1 0 0
        for(int i = nums.size()-1 ; i >= index ; i--){
            if(nums[i] > nums[index]){
                swap(nums[i] , nums[index]);
                break;
            }
        }

        //! rest will be the ascending order in sorted manner --> that's why reversing the remaining part it will sorted then

        reverse(nums.begin() + index + 1 , nums.end() );


        
    }
};