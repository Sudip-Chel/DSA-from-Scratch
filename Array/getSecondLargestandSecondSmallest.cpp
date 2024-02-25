/*Problem statement
You have been given an array ‘a’ of ‘n’ unique non-negative integers.



Find the second largest and second smallest element from the array.



Return the two elements (second largest and second smallest) as another array of size 2.



Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: [4, 2]

The second largest element after 5 is 4, and the second smallest element after 1 is 2.*/


#include <bits/stdc++.h>
#include <vector>


using namespace std;


int SecondLargest(vector<int> arr , int n ){
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1 ; i < n ; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }

        else if (arr[i] < largest && arr[i] > secondLargest)
            secondLargest = arr[i];
    }

    return secondLargest;
}

int SecondSmallest(vector<int> arr , int n){
    int smallest = arr[0];
    int secondSmallest = INT_MAX;  // INT_MAX using if we use -1 then chances to face trouble find second Smallest 

    for (int i = 1 ; i < n ; i++){
        if (arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] > smallest && arr[i] < secondSmallest)
            secondSmallest = arr[i];
    }

    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int secondLargest = SecondLargest(a,n);
    int secondSmallest = SecondSmallest(a,n);

    return {secondLargest,secondSmallest};
}
