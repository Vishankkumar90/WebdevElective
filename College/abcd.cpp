#include <iostream>
#include <string>
using namespace std;

int main() {
    string c;
    cin>>c;

        if(c.length()>=10){
            cout<<c[0]<<c.length()-1<<c[c.length()-1];
        }
        else{
            cout<<c;
        }
  

    return 0;
}