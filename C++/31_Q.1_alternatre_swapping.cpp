#include <iostream>
using namespace std;
// concept in notes

void printarray(int arr[], int n ){ // function to print array
    for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }


    }
}

int main() {
    int even[8]={1,3,5,7,9,4,6,2};
    int odd[5]={7,4,8,9,2};

    swapAlternate(even,8);
    printarray(even,8);

    swapAlternate(odd,5);
    printarray(odd,5);

    return 0;
}