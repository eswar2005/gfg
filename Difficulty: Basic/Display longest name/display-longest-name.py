
class Solution:
    def longest(self, names):
        l=[]
        # code here
        for i in names:
            l.append(len(i))
        k=max(l)
        for i in names:
            if len(i)==k:
                return i
            


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        names = input().split()
        obj = Solution()
        res = obj.longest(names)
        print(res)

# } Driver Code Ends