#include <iostream>
using namespace std;


void shellsort(int A[],int n){
    int i,j,temp,gap;

    for(gap=n/2;gap>=1;gap/=2){
        for(i=gap;i<n;i++){
            temp=A[i];
            j=i-gap;
            while(j>=0&&A[j]>= temp){
                A[j+gap]=A[j];
                j=j-gap;

            }
            A[j+gap]=temp;
        }
    }

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    shellsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}