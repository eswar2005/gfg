//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector <int > pos;
        vector<int > s;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                pos.push_back(arr[i]);
            }
        }
        sort(pos.begin(),pos.end());
        auto it = unique(pos.begin(), pos.end());
        pos.erase(it, pos.end());
        int m=pos.size();
        for(int i=1;i<=m;i++){
            s.push_back(i);
        }
        int ans=0;
        if(m==0){
            return 1;
        }
        else{
        for(int i=0;i<m;i++){
            if(s[i]!=pos[i]){
                ans= s[i];
                break;
            }
        }
        }
        if(ans==0){
            ans=m+1;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends