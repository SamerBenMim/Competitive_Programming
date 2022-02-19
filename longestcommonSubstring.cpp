#include <bits/stdc++.h>
using namespace std;


string lcs(string s1,string s2 ,int n , int m){
	int dp[n+1][m+1];
	string s="";
	for(int i =-1 ; i<= n ; i++){
		for(int j = -1 ;j<=m ; ++j){
			if(i==-1 || j==-1 ) dp[i+1][j+1]=0;
			else if(s1[i]==s2[j]) dp[i+1][j+1]= 1 + dp[i][j];
			else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
		}
	}
	

	while (n>=1 && m>=1){
		if(dp[n-1][m]==dp[n][m-1] ){
			s=s1[n]+s;
			n--;m--;
		}
		else if(dp[n-1][m]>dp[n][m-1]){
			
			n--;
		}
		else{
			
			m--;
		}
	}
	return s;
}

int main(){
string s1="hello",s2="hello";
int n=s1.length(),m=s2.length();



cout<<lcs(s1,s2,n,m);


}
