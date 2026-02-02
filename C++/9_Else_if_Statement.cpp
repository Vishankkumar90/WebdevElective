# include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two numbers a and b"<<endl;
    cin>>a;
    cin>>b;

    if (a>b){
    cout<<"a is greater than b"<<endl;
    }
    else if (a==0){ // else if statement is used to check more than one statement
        cout<<"a is equal to zero "<<endl;
    }
    else if (b==0){
        cout<<"b is equal to zero"<<endl;
    }
    else if (b>a){
        cout<<"b is greater than a"<<endl;
    }
    

return 0;
}
