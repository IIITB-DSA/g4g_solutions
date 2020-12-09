# https://practice.geeksforgeeks.org/problems/count-numbers-containing-43022/0/
class Solution:
    def countNumberswith4(self, N):
        c = 0
        for i in range(N+1):
            if '4' in str(i):
                c+=1
                
        return c



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.countNumberswith4(N))
# } Driver Code Ends
