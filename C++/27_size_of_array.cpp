#include <iostream>
using namespace std;
int main() {
    int arr[15]={1};
    int a;
    a=sizeof(arr)/sizeof(int); // here we are deviding the size of array with size of int so we can get the size of array
    cout<<"size of array is "<<a<<endl;
    return 0;

}