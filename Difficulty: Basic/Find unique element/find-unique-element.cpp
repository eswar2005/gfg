//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        unordered_map<int ,int>mp;
        for( int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto s:mp){
            if(s.second==1){
                return s.first;
            }
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the number of test cases
    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after k
        string inputLine;
        getline(cin, inputLine);
        stringstream ss(inputLine);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        cout << obj.findUnique(k, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends