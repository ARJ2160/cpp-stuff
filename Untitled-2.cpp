#include <iostream>
using namespace std;
#define z ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
	// your code goes here
	z;
	int t,count = 0;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int sum=0;
	    while(n!=0){
	        int rem=n%10;
	        sum=sum*10+rem;
	        n/=10;
        }
	    cout<<sum<<"\n";
	}
	return 0;
}