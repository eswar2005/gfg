
class Solution:
    def isBalanced(self, s):
        # code here
        d={')':'(',']':'[','}':'{'}
        l=[]
        for i in s:
            if i in "{([":
                l.append(i)
            else:
                if not l:
                    return False
                if d[i]==l[-1]:
                    l.pop()
                else:
                    l.append(i)
        if not l:
            return True
        else:
            return False
            