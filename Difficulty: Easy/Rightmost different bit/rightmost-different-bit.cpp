//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
     string binarys(int k){
            string s="";
            for(int i=31;i>=0;i--){
                if((k &(1<<i))>0){
                    s+=to_string(1);
                }
                else{
                    s+=to_string(0);
                }
            }
            return s;
        }
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
       
        
        string binOfM = binarys(m);
        string binOfN = binarys(n);
        reverse(binOfM.begin(),binOfM.end());
        reverse(binOfN.begin(),binOfN.end());
        for(int i=0;i<31;i++){
            if(binOfM[i]!=binOfN[i]){
                return i+1;
                break;
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends