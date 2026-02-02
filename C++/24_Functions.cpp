// funtions is a block of code that can perform operation in program when called
#include <iostream>
using namespace std;

int sum(int a, int b) { // here we are making function that adds two numbers
    int c=a+b;
     return c; 
}




int main() {
    int x;
    x=sum(8,9); // here we are calling function and giving values in brackets
    cout<<x<<endl;
    return 0;
}