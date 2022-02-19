#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,maxi=0;
	cin >>n;
	int t[n];
	for (int i =0 ;i < n ; ++i){
		cin >> t[i];
	}

	for (int i =0 ;i < n ; ++i){
		int l=i,r=i,res=0;
		while(l>0&& t[l-1]<=t[l]){
		l--;res++;
	}
		while(r<n-1&& t[r+1]<=t[r]){

		r++;res++;
		}
		maxi= max(res,maxi);
	
	}	
cout<<maxi+1<<endl;	
	
    return 0;
}
