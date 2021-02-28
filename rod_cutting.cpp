// https://practice.geeksforgeeks.org/problems/rod-cutting/0/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1category[]Dynamic%20Programming

#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>prices,vector<int>weights,int n){
    vector<int>dp(n+1,0);
    dp[0] = 0;
    //dp[k]: Max value obtained after cutting the rod of length k
    int maxDP = INT_MIN;
    for(int i=1;i<=n;i++){
        int currentDP = INT_MIN;
        
        for(int j=0;j<i;j++){
            currentDP = max(currentDP,prices[j]+dp[i-j-1]);
        }
        
        dp[i] = currentDP;
        maxDP = max(maxDP,currentDP);
    }
    return dp[n];
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>weights;
        vector<int>prices;
        for(int i=0;i<n;i++){
            int p;
            int w = i;
            cin>>p;
            prices.push_back(p);
            weights.push_back(w);
        }
        cout<<maxScore(prices,weights,n)<<"\n";
    }
    return 0;
}
