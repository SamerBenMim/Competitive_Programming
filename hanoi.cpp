#include <bits/stdc++.h>

using namespace std;

void hanoi(int i,int j,int k,int n){
	if(!n){
	
	hanoi(i,k,j,n-1);
	cout<<"deplace le tour "<<n<<" de "<<i<<" vers "<<k<<endl;
	hanoi(j,i,k,n-1);
}
}


int main(){
	int i=1,j=2,k=3,n=3;
	hanoi(i,j,k,n);


return 0;
}
