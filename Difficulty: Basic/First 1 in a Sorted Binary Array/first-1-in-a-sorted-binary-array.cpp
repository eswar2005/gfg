//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int sum=0;
        int ans=0;
        int left=0;
        int right=arr.size();
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(sum==0){
            return -1;
        }
        else{
        while(left<right){
            int mid=left+(right-left)/2;
            if(arr[mid]==1 && arr[mid-1]==0){
               return mid;
            }
            else if(arr[mid]==0){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
    }
}
// } Driver Code Ends