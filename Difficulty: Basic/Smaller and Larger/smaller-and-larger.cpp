//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int x) {
        // code here
        int less_cnt=0;
        int grater_cnt=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=x){
                less_cnt++;
            }
            if(arr[i]>=x){
                grater_cnt++;
            }
        }
        return {less_cnt,grater_cnt};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        Solution ob;
        vector<int> ans = ob.getMoreAndLess(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends