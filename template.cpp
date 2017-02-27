//template.cpp
//demonstrates class template test program

#include <iostream>
#include "Stack.h"  //stack class template defination

using namespace std;
int main()
{
Stcak< double > doubleStack ; //create a stack of double
const size_t doubleStackSize = 5 ;  //Stack size

double doubleValue = 1.1 ;   //first value to push

cout<< "Pushing elements onto doubleStack\n";

//push 5 doubles onto doubleStack
for (size_t i= 0 ; i < doubleStackSize; i++)
{
doubleStack.push(doubleValue);
cout<< doubleValue<<' ';
doubleValue += 1.1;

}  //end while  loop

cout<< "\n\nPopping elements from doubleStack\n";

//pop elements from doubleStack
while(!doubleStack.isempty() )// loop while stack is not empty
{
cout<< doubleStack.top() << '  ';  //display top element
doubleStack.pop();  //remove top element
}               
     //end while loop
cout<<"\nStack is empty,cannot pop.\n";

Stack<int>intStack;  //create a stack of int
const size_t intStackSize = 10 ;    //stack size
int intValue = 1;                   //first value to push

cout << "\n pushing elements onto intStack\n";

//push 10 integers onto intStack
for(size_t i=0; i< intStackSize; i++)
{
intStack.push(intValue);
cout << intValue++ << '  ';

}

cout<< "\n\npoping elements from intStack\n";

//pop elements from intStack
while (!intStack.isEmpty() )//   loop while stack is not empty
{
cout<<intStack.top() <<'  ';  //displaytop element
intStack.pop(); // remove top element
}

cout<< "\nStack is empty,cannot pop."<<endl;
} end main

