// And opearator && : needs both values to be true (1 and ony 1)
// Or operator   || : needs any one value to be true (1 or 0)
// Not operator  !  : it will make true to false and fase to true
// Xor operator  ^  : if both values are true (i.e 1 and 1) the it will give false value (i.e 0)


#include <iostream>
using namespace std;

int main() {
    int a=1;
    int b=0;

    cout<<"a&b "<<(a&b)<<endl; // values will be printed in bit form 
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"a^b "<<(a^b)<<endl;

            

    
    return 0;
}