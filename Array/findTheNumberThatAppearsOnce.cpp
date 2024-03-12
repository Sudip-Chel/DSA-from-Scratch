/*Problem statement
You are given a sorted array 'arr' of positive integers of size 'n'.



It contains each number exactly twice except for one number, which occurs exactly once.



Find the number that occurs exactly once.



Example :
Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

Output: 2*/


#include<vector>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.

	int xor1 = 0 ;

	for(int i = 0 ; i < arr.size() ; i++)

		xor1 = xor1 ^ arr[i];

	return xor1;
		
}


//LetCode Question

/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int xor1 = 0 ;

        for (int i = 0 ; i < nums.size() ; i++)

            xor1 = xor1 ^ nums[i];

        return xor1;
        
    }
};