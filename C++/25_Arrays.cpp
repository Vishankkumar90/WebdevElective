// Arrays are used to store multiples values in a single variable

#include <iostream>

using namespace std;

int main() {
    int a[15]; // Here we are declaring an array of size 15 
    cout<<a[7]<<endl; // here we are printing a the garbage value of array 



// Initailising an array

 int b[6]={5,7,8,37,26,89}; // no. elements will come in squared box
 cout<<b[4]<<endl; // here we are accesing the 4th element of the array (also knows as index)


 int c[15]={5,7,8,37,26,89}; // here we are initailizing an array of size more than it"s elements 
 cout<<c[8]<<endl; // 0 will be printed

// array with loop will print all the elements of array
cout<<"looping values"<<endl;
for(int i=0;i<=5;i++){
cout<<c[i]<<endl;
}
char d[4]={'a','b','c','d'}; // charachter array 
 cout<<d[2]<<endl; // c will be printed



    return 0;
}