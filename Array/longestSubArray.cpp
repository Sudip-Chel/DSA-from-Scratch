/*
Longest Sub-Array with Sum K
Difficulty: MediumAccuracy: 24.64%Submissions: 327K+Points: 4
Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.



Examples:


Input :
arr[] = {10, 5, 2, 7, 1, 9}, k = 15
Output : 4
Explanation:
The sub-array is {5, 2, 7, 1}.
*/

//! BETTER APPROACH for The  Array having only Positive Values 

//! Optimal Approach for the Array Having both 0 positive and Negative Value 

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubArraywithSumK(vector<int> a, long long k)
{
    map<long long, int> preSumMap;
    long long sum = 0;

    int maxlen = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }

        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
}

int main()
{

    return 0;
}


//? Optimal Approach for only present 0 and Positive integer in the Array


// int left = 0 , right = 0 ;
//         int sum = A[0];
//         int maxlen = 0;
        
//         while(right < N){
//             while(left <= right && sum > K){
//                 sum -= A[left];
//                 left++;
//             }
            
//             if(sum == K){
//                 maxlen = max(maxlen, right - left + 1);
                
//             }
            
//             right++;
            
//             if(right < N){
//                 sum += A[right];
//             }
//         }
        
//         return maxlen;