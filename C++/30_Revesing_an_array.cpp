#include <iostream>
using namespace std;

// concept is in notes
// here we have  to swap elemets
// here we have to make for two cases even array and odd array
void reverse(int arr[], int n){
    int start=0; // starting from 0 index becuse array start from 0
    int end=n-1; // end is upto n-1 becuse array start from 0

    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    } 
}  
void printarray(int arr[], int n){ // function to print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main() {
    int arr[6]={1,4,5,7,9,-8};
    int brr[5]={5,6,3,9,4};

    reverse(arr,6); // reverfing both array
    reverse(brr,5);

    printarray(arr, 6); // printing both array
    printarray(brr, 5);
}