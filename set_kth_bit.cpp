// https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1/?problemStatus=unsolved&page=2&query=problemStatusunsolvedpage2


#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int setKthBit(int n, int k)
    {
        return (1 << k) | n;
    }
    
};




// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
