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
int k = 0;
int dp1[1001][1001]= {-1} ;
 int bruteForce(string s1,string s2,int n ,int m){
 k++ ;
 if(dp1[n][m]!=-1) {
 	
 	return dp1[n][m];
 } 
 
 if(!m||!n) {
 	dp1[n][m]=0;
 return 0;	
 }
 		for(int i = n-1 ; i>=0;--i){
		 		for(int j = m-1 ; j>=0;--j){
		 			if(s1[i]==s2[j]) {
		 				dp1[n][m]=1 + bruteForce(s1,s2,n-1,m-1);
		 				return 1 + bruteForce(s1,s2,n-1,m-1);
					 }
					else return max( bruteForce(s1,s2,n-1,m), bruteForce(s1,s2,n,m-1));
			}
		}
 }

int main(){
	memset(dp1, -1, sizeof dp1); 
	
 	
string s1="bd",s2="abcd";
 int n=s1.length();int m=s2.length();
int i =0;

//cout<<lcs(s1,s2,n,m);
cout<<bruteForce(s1,s2,s1.length(),s2.length())<<endl;
cout<<"k= "<<k;
}
