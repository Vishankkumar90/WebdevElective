# include <iostream>
using namespace std;

int main()
{
    
int a=2/5;
cout<<a<<endl; //here the ouput will be zero because the ouput of 2/5 is 0.4 which is float but the data type is int so it will print 0
// NOTE:
// int/int=int
// Float/int=float
// double/int=double

float b=2.0/5;
cout<<b<<endl; // now the correct output will be printed

  //   Or

cout<<2.0/5<<endl;

int c=2;
int d=3;

bool e= (c==d); //here we are checking weather the numbers are equal or not using the == operator and bool data type
cout<<e<<endl;

bool r=(c>b);
cout<<r<<endl;

bool g=(c<b);
cout<<g<<endl;

bool h=(c<=b);
cout<<h<<endl;

bool p=(c>=b);
cout<<p<<endl;

bool m=(c!=b);
cout<<m<<endl;

return 0;
}

// Relational opearators
//  ==  operator is used whether two numbers are equal or not
//  >   used for less tha
//  <   used for greater than
//  <=  used for greater than equal to
//  >=  used for less than equal to
//  a!  used weather number is not equal to the other number or not

// Logical operators

// && it is used to check more than one statement
// || it is used to check any one of more than one statement
// !  it makes any number zero (negation operator) only if we give 0 to it then it will return valude 1