#include <bits/stdc++.h>

using namespace std;


int main(){
	double a,b;
	cin>>a>>b;

	int x = trunc(log(b/a) / log(double(3)/2))		;
	cout << floor((x))+1<<endl;
return 0;
}

//
//4*3^k>7*2^k
//
//3/2^k>7/4
//klog(3/2)> log(b/a)
