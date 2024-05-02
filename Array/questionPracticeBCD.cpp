// Sum of all Sub arrays

#include<iostream>
using namespace std;

void sumOfAllSubArray(int* arr , int n){

    
    for( int i = 0 ; i < n ; i++){
        int temp = 0;
        for(int j = i ; j < n ; j++){
            
            temp += arr[j];
            cout << temp <<"\t";

        }

       
    
}
}

int main(){
    
    int arr[4] = {1,3,4,7};

    sumOfAllSubArray(arr,4);
    
    
    return 0;
}