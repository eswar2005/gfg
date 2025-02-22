//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        int n=s.size();
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int maxfrq=-1;
        char res='\0';
        for(auto h:mp){
            if(h.second>maxfrq){
                maxfrq=h.second;
                res=h.first;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends