/*PROGRAM: FUTURE MULENGA
PURPOSE: LEARNING VECTORS
*/ 

#include <iostream>
#include <vector>
using namespace std;

int main (){
       
    // Declare a vector of integers with size
    vector <int> numbers(10);
    int value;

    for(int x=0; x<10; x++){

         cout << "Enter number "<<endl;
         cin >> value;
         numbers.push_back(value);
    }

    // Display the elements in the vector   
    for(int y=0; y < numbers.size(); y ++) {

        cout << numbers[y]<< " "<<endl;
    }

}