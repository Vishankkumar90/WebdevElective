// Continue statement is used to skip an iteration in a loop


#include <iostream>

using namespace std;
int main() {

    for(int i=0;i<5;i++){
        cout<<"Hello"<<endl;
        cout<<"Hi"<<endl;
        continue;
        cout<<"plz reply"; // this statement will be skipped in loop because it comes in continue statement

        
     
    }
    
    return 0;
}