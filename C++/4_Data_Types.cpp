# include <iostream>
using namespace std; 

int main()
{
    
int a=123; //int data type only stores integer values
cout<<a<<endl;

char b='a'; // char data type stores only chrachters like a and b or c (only single charachters)
cout<<b<<endl;

bool c=true; //bool data type check wether statemnet is true or false
cout<<c<<endl; // if statement is true it returns 1, if false it returns zero

float d=1.2;
cout<<d<<endl;
//Both float and double are used to print decimal digits but double in most used
double e=1.23;
cout<<e<<endl;

int size = sizeof(a); //here we are printing the size data type a which is int and its size is 4 bits
cout<<"Size of data type a is "<<size<<endl;

return 0;
}

// do not start a data type name with a number like int= 1abc 