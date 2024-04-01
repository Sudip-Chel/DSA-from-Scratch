/* Aravind's teacher gives him an assignment on the topic "array." He got two arrays as input, and in those he has to add the elements of both arrays and store them in a new array, and then only add the last digits of all elements from the third array and store them in a new variable and check if it is a prime number or not. Help Aravind complete his assignment using Java.

Requirements:

If both the array size is not the same, print "Both array size is different" then terminate the program.
If the size is less than or equal to zero, print "<size> is an invalid array size" then terminate the program.
If the elements entered in an array have a value less than zero, print "<arrValue> is an invalid input" and then terminate the program.
Note:

In the Sample Input / Output provided, the highlighted text in bold corresponds to the input given by the user, and the rest of the text represents the output.
Ensure to follow the object-oriented specifications provided in the question description.
Ensure to provide the names for classes, attributes, and methods as specified in the question description.
Adhere to the code template, if provided
Please do not use System.exit(0) to terminate the program.

 

Sample input/Output1:

Enter the size of first array

4

Enter the array elements

2

3

4

5

Enter the size of second array

4

Enter the array elements

6

6

6

6

18 is not a prime number
*/


#include<iostream>
using namespace std;

class ArrayManipulation {

    int n1 , n2 ;
    
    

  public:
    
     void primeCheck (int num ){

        for (int i = 2 ; i < num ; i++){

            if(num % i == 0){
                cout << num << " is Not a Prime Number\n";
                return;}

        }

      cout << num << " is  a Prime Number\n";

    

    }


    void arrayManipulate(){

        //arr1 input

        cout << "Enter the Size of 1st Array\t";

        cin >> n1;

        if(n1 <= 0){
            cout << n1 << "is an invalid array size";
            exit(1);

        }
        
        int arr1[n1];

        cout << "Enter Array Elements\n";

        for(int i = 0 ; i < n1 ; i++){

            cin >> arr1[i];

            if(arr1[i] < 0){
                cout << "Invalid Element\n";
                exit(2);
            }

        }

        

        // arr2 input 

         cout << "Enter the Size of 2nd Array\t";

        cin >> n2;

        

        if(n2 <= 0){
            cout << n2 << "is an invalid array size";
            exit(3);

        }

        if(n1 != n2){
            cout << n1 << "and " << n2 << "are not same ";
            exit(4);
        }
        
        int arr2[n2];

        cout << "Enter Array Elements\n";

        for(int i = 0 ; i < n2 ; i++){

            cin >> arr2[i];

            if(arr2[i] < 0){
                cout << "Invalid Element\n";
                exit(2);
            }

        }

    //array Manipulation
         int arr[n1];
         int sum = 0 ;

        for(int i = 0 ; i < n1 ; i++){

            arr[i] = arr1[i] + arr2[i];

            sum += (arr[i] % 10);


        }

      //prime checking
        
        primeCheck(sum);


    }

};

int main(){
    
    ArrayManipulation obj ;

    obj.arrayManipulate();
    
    
    return 0;
}