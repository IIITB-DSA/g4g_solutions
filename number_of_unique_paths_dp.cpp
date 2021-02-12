// https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1#

//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int NumberOfPath( int, int);

// Position this line where user code will be pasted

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        
        //calling NumberOfPath() function
        cout << NumberOfPath(a,b) << endl;
    }
}

// } Driver Code Ends


//User function template in C++

int NumberOfPath(int a, int b) {
    int dp[1000][1000] = {0};
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[0][1] = 1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(!i || !j){
                dp[i][j] = 0;
            }
            else if(j==1){
                dp[i][j] = 1;
            }
            else if(i==1){
                dp[i][j] = 1;
            }
            else
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[a][b];
}
