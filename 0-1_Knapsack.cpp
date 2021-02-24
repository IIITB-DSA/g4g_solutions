// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Returns the maximum value that  
// can be put in a knapsack of capacity W 
int dp[1001][1001]={-1};

int knapSacks(int W, int wt[], int val[], int n){
    if(W==0||n==0)
        return 0;
    if(dp[n][W]!=-1)
        return dp[n][W];
    if(wt[n-1]>W)
        return dp[n][W]=knapSacks(W,wt,val,n-1);
    return dp[n][W]=max( val[n-1]+knapSacks(W-wt[n-1],wt,val,n-1), knapSacks(W,wt,val,n-1));

}

int knapSack(int W, int wt[], int val[], int n){
    memset(dp,-1,sizeof(dp));
    return knapSacks(W,wt,val,n);
}





// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        //calling method knapSack()
        cout<<knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
