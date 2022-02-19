#include <bits/stdc++.h>

using namespace std;

//{4,2,0,3,7,1,6,8,9,5}
int partition (int *t, int n)
{
	int pivot = t[n-1];
	int i=-1 ,j = 0;
	for(j=0 ; j<n-1;j++){
		if(t[j]<=pivot){
		++i;
		swap(t[j],t[i]);
		

		
	}
		

	}
	
	
	swap(t[n-1],t[i+1]);
	return i+1 ;
}



void quicksort(int * t ,int  n){
	if(n>0){
	int pos ;
	pos=partition(t,n);
	quicksort(t,pos);
	quicksort(t+pos+1 , n-pos-1);
}
}
int main(){
	int t[15] = {99,99,0,4,2,8,3,7,1,6,0,9,5,99,99};


	
	quicksort(t,15);
	
	for (int i =0 ;i<15 ;++i){
		cout << t[i]<< " ";
	}

	
	
return 0;
}
