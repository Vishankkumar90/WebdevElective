#include <iostream>
using namespace std;

int main() {
    int a;
    float b,c;

    
    cout<<"enter two numbers"<<endl;
    cin>>b;
    cin>>c;
    cout<<" Enter operation"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>a;
    switch(a){
        case 1:
        cout<<b+c<<endl;
        break;
        case 2:
        cout<<b-c<<endl;
        break;
        case 3:
        cout<<b*c<<endl;
        break;
        case 4:{ // using nested switch to avoid division by zero
            switch ((int)c){ // here we are typecasting c variable in int so that we can give choise value as an integer
                case 0: // if the c=0 
                cout<<"cannot devide by zero"<<endl;
                break;
                default:
                cout<<b/c<<endl;
            }
        }
        break;
        default:
        cout<<"invalid numbers"<<endl;
        
    }

    
    return 0;
}