//A. Team
#include <bits/stdc++.h>

using namespace std;


//diviser pour regner


findmax(int *t ,int n){

	if(n<1) return t[0]; 
	return max(max(findmax(t,n/4),findmax(t+n/4, n/4)),max(findmax(t+n/2,n/4),findmax(t+3*n/4,n-3*n/4)));
}


int main(){
	int t[17]={2,1,0,3,4,5,6,7,8,9,99,11,12,13,14,15,107};
	cout<<findmax(t,17);
	return 0;
}

//
//4*3^k>7*2^k
//
//3/2^k>7/4
//klog(3/2)> log(b/a)
