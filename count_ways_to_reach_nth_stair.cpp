// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=2&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage2category[]Dynamic%20Programming#


#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int countWays(int);

int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends


// function to count ways to reach mth stair

int countWays(int m){
    int dp[m+1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=m;i++){
        dp[i] = (dp[i-1] + dp[i-2])%(1000000007);
    }
    return dp[m];
}
