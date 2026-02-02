# include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter length"<<endl;
    cin>>n;
    int i=1;
    int sum=0; //here we are taking initial value of sum variable 
    while(i<=n){
        sum=sum+i; //here it will add the number in loop iteration
        i=i+1;
    }

    cout<<"value of summation is "<<sum<<endl;


return 0;
}
