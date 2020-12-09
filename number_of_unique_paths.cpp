// https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/0/?category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1
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
    int dp[a][b];
    for(int i=0; i<a; i++){
        for(int j=0;j<b;j++){
            if(!i || !j){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    return dp[a-1][b-1];
}
