//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   void reverseArray(vector<int>& arr ,int start,int end){
            while(start<end){
                int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end--;
            }
        }
    void leftRotate(vector<int>& arr, int d) {
        // code here
        int start=0;
        int n=arr.size();
        reverseArray(arr,start,d-1);
        reverseArray(arr,d,n-1);
        reverseArray(arr,start,n-1);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends