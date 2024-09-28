# Function should return an integer value
class Solution:
    def convertFive(self, n):
        # Code here
        m=''
        k=str(n)
        for i in k:
            if i=='0':
                m+='5'
            else:
                m+=i
        n=int(m)
        return n
                


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        ob = Solution()
        print(ob.convertFive(int(input().strip())))
# } Driver Code Ends