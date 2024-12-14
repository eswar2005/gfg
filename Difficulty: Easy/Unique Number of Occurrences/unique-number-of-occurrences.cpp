//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int >mpp;
        unordered_map<int,int >mp2;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<int> ans;
        for( auto s:mpp){
            ans.push_back(s.second);
        }
        for(int i=0;i<ans.size();i++){
            mp2[ans[i]]++;
        }
        for(auto k :mp2){
            if(k.second>1){
                return 0;
                break;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends