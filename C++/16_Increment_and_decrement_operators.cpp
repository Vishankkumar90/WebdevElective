
// i=i+1 can be written as i++ or ++i

// i++ post increment opearator (it will increase the value of i after the exection) 
// ++i pre increment opearator  (it will increase the value of i before the exection)
// i-- post decrement operator  (it will decrease the value of i after the exection)
// --1 pre decrement operator   (it will decrease the value of i before the exection)
#include <iostream>
using namespace std;

int main() {

    int i=7;
    cout<<(++i)<<endl;
    // now the value of i is increased by one , i.e now i is 8
    cout<<(i++)<<endl;
    //here value of above line is executed ie 8
    cout<<(i--)<<endl;
    // 9, i=8
    cout<<(--i)<<endl;
    // 7 , i=7
    
    return 0;
}