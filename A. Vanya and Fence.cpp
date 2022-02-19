#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,h,a ,ans =0;
	cin >> n>>h ;
	for(int i =0;i<n;++i){
		cin>>a;
		(a<=h)?ans++:ans+=2;
	}
	cout<<ans<<endl;
return 0;
}
