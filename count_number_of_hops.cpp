// https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolveddifficulty[]-1difficulty[]0page1category[]Dynamic%20Programming

#include <bits/stdc++.h>
using namespace std;
 
long long countWays(int);
 
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		
		//calling function countWays()
		cout << countWays(n) << endl;
	}
    
    return 0;
    
}
// } Driver Code Ends


// function to count number of ways to reach top of the stair
long long countWays(int n){
    
    long long dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i=4; i<=n; i++){
        dp[i] = (dp[i-1]+dp[i-2]+dp[i-3])%1000000007;
    }
    return dp[n];
}
