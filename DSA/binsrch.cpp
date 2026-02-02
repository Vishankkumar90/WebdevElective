#include <iostream>
using namespace std;


int binsrch(int arr[], int size,int key ){
    int low=0;
    int high=size-1;

    int mid=(low+high)/2;

    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;

        }

      else{
        high=mid-1;
        }
        mid=(low+high)/2;

    }
    return -1;

}


int main() {
    int arr[7]={12,34,56,78,112,223,445};
    int b=binsrch(arr,7,213);
    cout << b << endl;
    return 0;
}
