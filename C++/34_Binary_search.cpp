#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;
    int mid=(start+end)/2;
    
    while(start<=end){ //until start<end
        if(arr[mid]==key){ // if mid elemet = key 
            return mid;
        }

        // if key is not =mid we have to check left or right part
        if(key>arr[mid]){ //used to go to the right part
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1; // if nothing found return -1
}


int main() {
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int evenindex= binarysearch(even,6,12);

    cout<<"index of 12 is "<<evenindex<<endl;
    int oddindex= binarysearch(even,5,8);
    cout<<"index of 8 is "<<oddindex<<endl;
    

    return 0;
}