#include<iostream>
#include<vector>

using namespace std;

/*You are given a sorted integer array 'arr' of size 'n'.



You need to remove the duplicates from the array such that each element appears only once.



Return the length of this new array.



Note:
Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 


For example:
'n' = 5, 'arr' = [1 2 2 2 3].
The new array will be [1 2 3].
So our answer is 3.*/

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.

	int i = 0;

	for (int j = 1 ; j < n ; j++){

		if(arr[j] != arr[i]){
			arr[i+1] = arr[j];
			i++;
		}
	}

	return (i+1);
}

//LeetCode Question 

/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        int i = 0 ;

        for (int j = 1 ; j < n ; j++){

            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }

        return (i+1);
        
    }
};