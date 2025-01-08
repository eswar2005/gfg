//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code her
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        auto it = unique(a.begin(),a.end());
        a.erase(it,a.end());
        return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        if (ans.size() == 0) {
            cout << "[]" << endl;
            continue;
        }
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends