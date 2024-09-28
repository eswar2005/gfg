
class Solution:
    def swapKth(self, k, arr):
        # Code Here
        m=len(arr)
        arr[k-1],arr[m-k]=arr[m-k],arr[k-1]
        



#{ 
 # Driver Code Starts
def main():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    t = int(data[0])
    index = 1
    while t > 0:
        t -= 1
        k = int(data[index])
        arr = list(map(int, data[index + 1].split()))
        ob = Solution()
        ob.swapKth(k, arr)
        print(' '.join(map(str, arr)))
        index += 2


if __name__ == "__main__":
    main()

# } Driver Code Ends