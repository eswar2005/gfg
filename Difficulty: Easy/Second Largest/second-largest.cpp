class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxs=0;
        int sec_max=0;
        int n=arr.size();
        if(n<2)return -1;
        for(int i=0;i<n;i++){
            if(arr[i]>maxs ){
                sec_max=maxs;
                maxs=arr[i];
            }
            else if(arr[i]>sec_max && arr[i]!=maxs){
                sec_max=arr[i];
            }
        }
        if (sec_max==0) return -1;
        return sec_max;
    }
};