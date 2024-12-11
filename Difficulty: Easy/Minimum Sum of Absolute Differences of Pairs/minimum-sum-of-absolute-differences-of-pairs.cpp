//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    // void sorts(vector<int> &arr ,int n){
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<i;j++){
    //             if(arr[j]<arr[j+1]){
    //                 int temp = arr[j];
    //                 arr[j] =arr[j+1];
    //                 arr[j+1]=temp;
    //             }
    //         }
    //     }
    //}
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
       // sorts(A,N);
        //sorts(B,N);
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long sums=0;
        for(int i=0;i<N;i++){
            sums=sums+(abs(A[i]-B[i]));
        }
        return sums;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> A(N),B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
            cin>>B[i];
        }
        Solution ob;
        cout<<ob.findMinSum(A,B,N)<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends