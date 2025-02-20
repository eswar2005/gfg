//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        // int n=arr.size();
        // vector<double> res;
        // vector<double> ans;
        // int i=0;
        // while(i<n){
        //     ans.emplace_back(arr[i]);
        //     sort(ans.begin(),ans.end());
        //     int k=ans.size();
        //     if(k%2==0){
        //         res.emplace_back(((ans[(k/2)-1])+(ans[k/2]))/2);
        //     }
        //     else{
        //         res.emplace_back(ans[k/2]);
        //     }
        //     i++;
    int n = arr.size();
    vector<double> res;
    
    priority_queue<int> left; 
    priority_queue<int, vector<int>, greater<int>> right;
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if (left.empty() || num <= left.top()) {
            left.push(num);
        } else {
            right.push(num);
        }

        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        } else if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }

        if (left.size() == right.size()) {
            res.push_back((left.top() + right.top()) / 2.0);
        } else {
            res.push_back(left.top());
        }
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends