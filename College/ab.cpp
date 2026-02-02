#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
     int n,m;
    cin>>n;
    cin>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
    }

    sort(arr.begin(),arr.end());

    for( int x:arr ){
        cout<<x<<" ";
    }


    return 0;
}