#include <iostream>
using namespace std;

int main() {
    int a=5;

    cout<<a<<endl; // here only 5 will be printed 

    if(true){
        int a=3;
        cout<<a<<endl; // here is an entire 'if'  block so the value which is initailised in this block will be printed
    }
    cout<<a<<endl;
    cout<<a<<endl;



    return 0;
}