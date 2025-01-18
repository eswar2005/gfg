//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n =arr.size();
        int sums =0;
        for(int i=0;i<k;i++){
            sums+=arr[i];
        }
        int maxsum=0;
        int l=0;
        int r=k-1;
        while(r<n){
          maxsum=max(sums,maxsum);
          sums=sums-arr[l];
          l++;
          r++;
          sums=sums+arr[r];
          
        }
        return maxsum;
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
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends