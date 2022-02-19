#include <bits/stdc++.h>
using namespace std;
#include <map>


int main(){
	int n,m,a=5,b=5,ans;
	cin>>n>>m;
	    map<int, int> mp;
  map<int, int>::iterator p;
	
	for(int i = 0 ;i<m;++i){
		cin>>a;
		cin>>b;
		mp.insert(pair<int,int>(a,b));//pair<int,int>(a,b)
	}

  for ( p = mp.begin(); p != mp.end(); p++) {
        cout << '\t' << p->first << '\t' << p->second
             << '\n';
    }
	
      for ( p = mp.end(); p != mp.begin(); --p) {
        cout << '\t' << p->first << '\t' << p->second
             << '\n';
    }
	
//	  for (map<int, int>::iterator itr = mp.end(); itr != mp.begin();--itr) {
//      if(n>=itr->first){
//      	n-=itr->first;
//      	ans+=itr->first*itr->second;
//      	cout<<ans<<endl;
//	  }else{
//	  	ans+=n*itr->second;
//	  }
//      
//    }

}
