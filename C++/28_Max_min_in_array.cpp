#include <iostream>
using namespace std;

int getmax(int num[],int n){
    int max=INT_MIN;
   for(int i=0;i<n;i++){
    if(num[i]>max){
        max=num[i];

    }

    }
// returning max value
return max;

}
int getmin(int num[],int n){
    int min=INT_MIN;
   for(int i=0;i<n;i++){
    if(num[i]<min){
        min=num[i];
    }

    }
// returning max value
return min;
}

int main(){
    int size;
    cin>>size;
    int num [100];

    // taking input array
    for(int i=0;i<size; i++){
        cin>>num[i];
    } 

cout<<"max element is "<<getmax(num, size)<<endl;
cout<<"min element is "<<getmin(num, size)<<endl;
return 0;
}

// predfined functions are also there for 
// maxi= num(maxi, num[i])
// same like this mini function for min element