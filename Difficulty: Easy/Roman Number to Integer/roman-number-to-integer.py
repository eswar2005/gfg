class Solution:
    def romanToDecimal(self, s): 
        sums=0
        d={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        i=0
        n=len(s)
        if(n==1):
            sums+=d[s[0]]
            return sums
        while(i<n-1):
            if(d[s[i]]<d[s[i+1]]):
                sums+=d[s[i+1]]-d[s[i]]
                i+=2
            else:
                sums+=d[s[i]]
                i+=1
        if i==n-1:
            sums+=d[s[i]]
        return sums