class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int n=arr.length;
        int largest=Integer.MIN_VALUE;
        int second_largest=Integer.MIN_VALUE;
        //Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
            // if(arr[i]<largest && arr[i]>second_largest){
            //     second_largest=arr[i];
            // }
        
        }
        for(int i=0;i<n;i++){
            if(arr[i]>second_largest && arr[i]<largest ){
               second_largest=arr[i]; 
            }
        }
        if(second_largest==Integer.MIN_VALUE){
            return -1;
        }
        return second_largest;
        
    }
}