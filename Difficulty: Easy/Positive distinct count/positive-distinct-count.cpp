//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function template for C++

class Solution {
  public:
    int distinctCount(vector<int>& arr) {
        // code
        long long int cnt=0;
        sort(arr.begin(),arr.end());
        auto it = unique(arr.begin(),arr.end());
        arr.erase(it,arr.end());
        int n= arr.size();
        for(int i = 0;i < n; i++){
            if(arr[i] > 0){
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.distinctCount(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends