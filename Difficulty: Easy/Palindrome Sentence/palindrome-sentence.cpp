//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User template code in C++

class Solution {
  public:
    bool sentencePalindrome(string &s) {
        // code here
        string ans="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) or isdigit(s[i])){
                ans+=tolower(s[i]);
            }
        }
        string temp="";
        
        for(int i=ans.size()-1;i>=0;i--){
            temp+=ans[i];
        }
        return ans==temp;
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
        Solution ob;
        if (ob.sentencePalindrome(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}

// } Driver Code Ends