// https://practice.geeksforgeeks.org/problems/count-of-strings-that-can-be-formed-using-a-b-and-c-under-given-constraints/0/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1category[]Dynamic%20Programming

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int res = (n*n*n + 3*n + 2)/2;
	    cout<<res<<"\n";
	}
	return 0;
}
