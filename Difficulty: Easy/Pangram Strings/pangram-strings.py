#User function Template for python3
class Solution:
	def isPanagram(self, S):
	    al=""
		# code here
		S=S.lower()
		sa="qwertyuiopasdfghjklzxcvbnm "
	#	for i in S:
	#	    if i.isalpha():
	#	        al+=i
		#print(al)
		for i in sa:
		    if i not in S:
		        return 0
		return 1
		
		

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()
		answer = ob.isPanagram(S)
		print(answer)

# } Driver Code Ends