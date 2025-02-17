//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(),ans.end());
         int s=ans.size();
        if(s==0){
            return -1;
        }
        int p=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==ans[s-1]){
                p=i;
                break;
            }
        }
        return p;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends