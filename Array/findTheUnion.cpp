/*Given two sorted arrays of size n and m respectively, find their union. The Union of two arrays can be defined as the common and distinct elements in the two arrays. Return the elements in sorted order.

Example 1:

Input: 
n = 5, arr1[] = {1, 2, 3, 4, 5}  
m = 5, arr2 [] = {1, 2, 3, 6, 7}
Output: 
1 2 3 4 5 6 7
Explanation: 
Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
Example 2:

Input: 
n = 5, arr1[] = {2, 2, 3, 4, 5}  
m = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 
1 2 3 4 5
Explanation: 
Distinct elements including both the arrays are: 1 2 3 4 5.
Example 3:

Input:
n = 5, arr1[] = {1, 1, 1, 1, 1}
m = 5, arr2[] = {2, 2, 2, 2, 2}
Output: 
1 2
Explanation: 
Distinct elements including both the arrays are: 1 2.*/

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
        
        
        int i = 0;
        int j = 0 ;
        
        vector <int> unionArr;
        
        while(i < n && j < m){
            
            if(arr1[i] <= arr2[j]){
                if(unionArr.size() == 0 || unionArr.back() != arr1[i])
                    
                    unionArr.push_back(arr1[i]);
                    
                i++;
            }
            
            
            else {
                 if(unionArr.size() == 0 || unionArr.back() != arr2[j])
                    
                    unionArr.push_back(arr2[j]);
                    
                j++;
            }
        }
        
        
        while( i < n){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i])
                    
                    unionArr.push_back(arr1[i]);
                    
                i++;
        }
        
        while (j < m){
             if(unionArr.size() == 0 || unionArr.back() != arr2[j])
                    
                    unionArr.push_back(arr2[j]);
                    
                j++;
        }
        
        return unionArr;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}