// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1#



#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int, int[]);

int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];

        //calling method longestSubsequence()
        cout << longestSubsequence(n, a) << endl;
    }
}
// } Driver Code Ends


// return length of longest strictly increasing subsequence

int longestSubsequence(int n, int a[]){
   int dp[n];
   for(int k=0;k<n;k++) dp[k] = 1;
 
   
   for(int i=1;i<n;i++){
       for(int j=0;j<i;j++){
           if(a[j]<a[i]){
               dp[i] = max(dp[i],dp[j]+1);
           }
       }
     
   }
   return *max_element(dp, dp+n);
   
}
