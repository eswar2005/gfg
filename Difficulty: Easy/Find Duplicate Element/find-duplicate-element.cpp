//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto s:mp){
            if(s.second>1){
                return s.first;
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr;
        for (int i = 0; i < 10; i++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        Solution obj;
        int ans = obj.findDuplicate(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends