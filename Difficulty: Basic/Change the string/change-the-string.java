//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            String s = sc.next ();
            Solution ob = new Solution();
            String ans = ob.modify(s);
            System.out.println(ans);
        }
        
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    String modify(String s){
        int flag=0;
        char c=s.charAt(0);
        int firstele=(int)c;
        if(firstele>96){
            flag=1;
        }
        String ans;
        if(flag==1){
            ans=s.toLowerCase();
        }
        else{
            ans=s.toUpperCase();
        }
        return ans;
    }
}