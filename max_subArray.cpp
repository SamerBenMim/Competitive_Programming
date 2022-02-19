
#include <bits/stdc++.h>
using namespace std;

//O(n)

int main(){	//	 0  1 2 3  4 5  6  7  8  9	
	int t[10] = {1,-3,2,1,-7,6,-1,-14,11,-23};
	
	int currentSum=0;
	int max=0;
	int r=0,l=0,n=0,prev=0;
	
	for(int i = 0 ; i<10;++i){ 
		currentSum+=t[i];
		if(currentSum>=0){
			
			if(currentSum>max){
			max=currentSum;r=i; l = n;
			}
			}else{
				n=i+1;
				
			currentSum=0;
		}
	}
	
    cout<<max<< " entre : "<<l<<" et "<<r;
    return 0;
}
