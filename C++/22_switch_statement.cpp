#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter number"<<endl;
    cin>>a;
    switch(a){ // enter the variable
        case 1:
        cout<<"number is 1"<<endl;
        break;  // break is nessasary otherwise below case (case 2) will also be printed
        case 2:
        cout<<"number is 2"<<endl;
        break;
        case 3:
        cout<<"number is 3"<<endl;
        break;
        case 4:
        cout<<"number is 4"<<endl;
        break;
        default: // defualt is used to print the defualt value
        cout<<"Invalid number"<<endl;
    }


    return 0;
}