/*
   DEVELOPER: FUTURE MULENGA 
   DATE CREATED: 17-12-2024
   PURPOSE: LEARNING LISTS IN C++
   GITHUB: https://github.com/FutureMulenga/AI-Algortihms-in-c-/tree/main/Lists
*/

#include <iostream>
#include <list>
using namespace std;


int main(){

   // Declare a list of strings
   list<string> names;

// Adding elements to the list  using push_back() method and push_front()  method
   names.push_back("FUTURE");
   names.push_front("MULENGA");
   names.push_back("RIPPER");

   //declare the iterator 
   list<string>:: iterator  itr;
   itr = names.begin();

//loop to iterate through the elememts in the lists 
   for(itr; itr != names.end() ; ++itr) {

      cout<<*itr<<endl;
   }

}