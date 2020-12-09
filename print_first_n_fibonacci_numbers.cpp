// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1/?category[]=Dynamic%20Programming&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolveddifficulty[]-1page1#
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;
vector<long long> printFibb(int);



int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        
        //calling function printFibb()
        vector<long long> ans = printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends


//User function template for C++

// n : given integer value
// print the nth fibb number in the function 
vector<long long> printFibb(int n) {
    vector<long long> fibb(n,0);
    fibb[0] = 1;
    fibb[1] = 1;
    for(int i = 2; i < n ; i++){
        fibb[i] = fibb[i-1] + fibb[i-2];
    }
    for(auto i : fibb){
        cout<<i<<" ";
    }
}
