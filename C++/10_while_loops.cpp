# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the length of digits"<<endl; //we are taking user input for lenghth of digits
    cin>>n;

    int i=1; //we have to intialise starting value

    while(i<=n){ //while means until the statement which is that if given number is less than n it will keep printing i
        cout<<i<<" "; // here we are printing digits with space between them
        i=i+1;
    }


return 0;
}
