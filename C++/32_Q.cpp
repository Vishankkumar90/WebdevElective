// we have to find the unique lement in a array we have to remove repretative element
#include <iostream>
using namespace std;

int main() {
    
    int size, arr[]={0}, ans =0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i]; // using XOR opertator for repetative element because a^a=0 so we can use it remove repetative elements
    }
    return 0;
}