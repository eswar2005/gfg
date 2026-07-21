#include <iostream>
using namespace std;
    int sumofn(int n){
        if(n==0){
            return 0;
        }
        return n+sumofn(n-1);
    }
    int main() {
        int n;
        cin >> n;

    // code here
        int ans=sumofn(n);
        cout<<ans;

        return 0;
    }