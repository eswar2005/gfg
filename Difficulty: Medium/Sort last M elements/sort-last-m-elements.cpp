//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:void mergess(vector<int>& arr, int low, int mid,int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
                left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
                right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        
    }

    void ms(vector<int>& arr, int low, int high){
      if ( low == high) return;
      int mid=(low+high)/2;
      ms(arr,low,mid);
      ms(arr, mid+1,high);
      mergess(arr,low, mid, high);
    }
    void sortLastMelements(vector<int>&nums, int n, int m) {
    	// Code here
    	int siz=nums.size();
    	ms(nums,n,siz-1);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n+m);
		for(auto &i: nums)
			cin >> i;
		Solution obj;
		obj.sortLastMelements(nums, n, m);
		for(auto i: nums)
			cout << i << " ";
		cout << "\n";
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends