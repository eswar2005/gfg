//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

/*Function to swap array elements
 * arr : array input
 */
class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<high-1){
            int temp=arr[low];
            arr[low]=arr[low+2];
            arr[low+2]=temp;
            low++;
           // high--;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.swapElements(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends