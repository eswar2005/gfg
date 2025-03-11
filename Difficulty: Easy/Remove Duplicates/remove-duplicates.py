#User function Template for python3
class Solution:
	def removeDups(self, str):
		# code here
		st=""
		for i in str:
		    if i not in st:
		        st+=i;
		return st
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        s = input()

        ob = Solution()
        answer = ob.removeDups(s)

        print(answer)
        print("~")

# } Driver Code Ends