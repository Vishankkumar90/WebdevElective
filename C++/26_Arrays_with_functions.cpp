#include<iostream>
using namespace std;

void printArray(int arr[], int size) { // making a function that print every element of an array

    cout<< " printing the array " << endl;
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing done " << endl;
}

int main (){
    int third[15]={2,7};
    printArray(third,15);
}