// https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1category[]Dynamic%20Programming#



 // } Driver Code Ends


class Solution{
	public:
		int nthStair(int n){
		   return 1+n/2;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
