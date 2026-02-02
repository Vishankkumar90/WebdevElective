#include <iostream>
using namespace std;
// linear seach is used to search an element in a array 

bool search(int arr[], int size, int key ){ // making a function to search
for(int i=0;i<size;i++){
    if (arr[i]== key ){ //searching
        return 1; //return 1 if found 
    }
}
return 0; // return 0 if not found
}


int main() {

int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
//in this array we have to check weather 1 is present or not//


cout<<"enter the element to search for "<<endl;
int key;
cin>>key;

bool found =search(arr,10,key); // making a variable for boolean value

if(found){
    cout<<"key is present"<<endl;
}
else{
    cout<<"Key is absent"<<endl;
}


    return 0;
}