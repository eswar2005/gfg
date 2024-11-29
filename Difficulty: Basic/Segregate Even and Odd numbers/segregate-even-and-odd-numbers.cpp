//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        vector<int > even;
        vector <int> odd;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int j=0;
        for(int i=0;i<even.size();i++){
            arr[j]=even[i];
            j++;
        }
         for(int i=0;i<odd.size();i++){
            arr[j]=odd[i];
            j++;
         }
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
        obj.segregateEvenOdd(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}
// } Driver Code Ends