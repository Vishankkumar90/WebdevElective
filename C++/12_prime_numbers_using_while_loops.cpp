# include <iostream>
using namespace std;

int main()
{
int n;
cout<<"enter number"<<endl;
cin>>n;
int i=2; // because every number devides by 1 here so here we are taking intial value as 2 instead of 1

while (i<n) {// here we are taking < only operator beacuse we do not want the equal to n number becuase it will be completely devided by it
 if (n%i==0){
  cout<<"not prime for "<<i<<endl;

 }

 else{
    cout<<"prime for "<< i <<endl;
 }

 i=i+1;

}

return 0;
}
