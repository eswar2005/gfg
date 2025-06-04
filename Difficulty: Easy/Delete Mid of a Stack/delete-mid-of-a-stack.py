import math
class Solution:
    def deleteMid(self, stack):
        #code here
        k=len(stack)
        ele=math.floor((k+1)/2)
        #print(ele)
        stack[ele-1]=-1
        stack.remove(-1)
        return stack