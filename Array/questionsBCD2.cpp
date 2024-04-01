/* Henry gave an assignment to his students. He gave a set of numbers to his students and the students have to ?nd whether it's a prime
 number or not. If it is a prime number then the students have to add only the prime number to get that number as the result. Write a Java
 program to help the students to solve this problem
 Requirements:-----
        The array size should be between 1 to 5 (both inclusive), else print "<array size> is an invalid array size".
        The number should be greater than 0 and less than 100 (both not inclusive), else print "<number> is an invalid input".
        If
        If
 there is no sum of prime numbers print "The <array size> numbers are not sum of prime numbers".
 there is more than one sum of prime number in the array then print that number also.
        The prime number should be added in a consecutive manner
 Note:
 In the Sample Input / Output provided, the highlighted text in bold corresponds to the input given by the user, and the rest of the text
 represents the output.
 Ensure to follow the object-oriented speci?cations provided in the question description.
 Ensure to provide the names for classes, attributes, and methods as speci?ed in the question description.
 Adhere to the code template, if provided.
 Please do not use System.exit(0) to terminate the program. 
Sample Input/Output 1:
 Enter the array size
 4
 Enter the numbers
 12
 17
 5
 7
 The sum of prime numbers is
 https://pwc.tekstac.com/mod/vpl/view.php?id=5625
 Page 1 of 3
Object Oriented Programming in Java Magic Sum Description
 29/03/24, 10:41 PM
 17
 5
 Explanation
 12 is not a prime number
 17 is a prime number so add a consecutive prime number
 2+3+5+7 = 17
 17 is the sum of prime number
 5 is a prime number so add a consecutive prime number
 2+3= 5
 5 is the sum of prime number
 7 is a prime number so add a consecutive prime number
 2+3+5 = 10>7
 7 is not sum of prime number
 Ouputs are 17 ,5*/

 #include<iostream>
 #include<vector>
 using namespace std;


 int primeCheck(int num){

    for(int i = 2 ; i < num ; i++ ){
        
        if(num % i == 0){
            return 0;
        }
    }

    return num;

 }

bool checkSumofPrime(int num){
     
    
     int sum = 0;

        for(int j = 2 ; j < num ; j++){
            
            if(primeCheck(j)){
                    sum += j;

                if(sum == num){

                    return true ;
                    
                }

                if(sum > num)
                     return false;


            }
        

    }

    return false;
 }
 
 int main(){
    
    int n1;

    cin >> n1;

    if (n1 < 1 || n1 > 5){
        cout << n1 <<" is Invalid Size\n";
        exit(1);
    }

    int arr[n1];

    for (int i = 0 ; i < n1 ; i++){

        cin >> arr[i];

        if(arr[i] < 0 || arr[i] > 100){
            cout << arr[i] <<" is Invalid Input\n";
            exit(2);
        }

    }


     vector<int> index;

    for (auto i : arr){

       if(primeCheck(i)){
        
        if(checkSumofPrime(i)){
            index.push_back(i);
        }

      }
      
    }

   

    
    cout << "The Sum of Prime numbers are \n";

    if(index.size() == 0){
        cout << "the array size are not sum of prime numbers\n";
        return 0;
    }
    for (auto i : index)
        cout << i <<"\n";
    
    
    return 0;
 }