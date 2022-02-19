#include <bits/stdc++.h>
using namespace std;


int main(){
	int a,ans=0,n;
	cin>>n;
	cin>>a;
	int t[n];

	for(int i =0 ;i<n ; i++){
		cin>>t[i];
		if(i==a-1&& t[i]){
			ans++ ;
		}
		
else {

			if(t[i] ) {
				if( 0<=(a-abs(a-1-i)) &&  (a-abs(a-1-i))<n &&t[2*(a-1)-i])			ans+=2;
				else ans++;
			}
}
		}		  
	if(ans==1) cout<<1<< endl;
	else cout<<ans/2<<endl;
    return 0;
}
