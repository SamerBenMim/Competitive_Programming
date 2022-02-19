#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s ,int i,int j){
	for(int k=0 ; k<=j-i ;k++){
		if(s[i+k]!=s[j-k]) return false;
	}
	return true;
}


string longest_Palindrome1(string s){
	int d=0,f=0;
	for(int i =0 ;i<s.length();++i){
		for(int j =i+1 ;j<s.length();++j){
			if (isPalindrome(s,i,j)){
				for(int l=i;l<=j;++l){
				}
				if(j-i>f-i) {
					d=i;f=j;
				}	
			}
		}
	}
	
	for(int i=d;i<=f;++i){
		cout<<s[i];
	}
}

string longest_Palindrome2(string s){
	int centre =0,ecart=0,e=0;
	
	for(int i=0;i<s.length();++i){
		e=1;
		while(i-e>=0 && i+e <s.length() && s[i+e] == s[i-e]){e++;}
		if(e>ecart){
			ecart = e;centre=i;
		}
				
	}
	cout<<ecart<<" "<<centre<<endl;
		for(int i=centre-ecart+1;i<=centre+ecart+1;++i){
		cout<<s[i];
	}
}


string longest_Palindrome2(string s){
string s1 ="" ;
	for(int i=s.length()-1;i>=i;++i){
		s1+=s[i];
	}
	
	for(int i=0;i<s.length();++i){
		if(s)
	}
	
}
int main(){
string s ="samas";
//o(n^3)
//cout<<longest_Palindrome1(s)<<endl;

//o(n^2)
//cout<<longest_Palindrome2(s)<<endl;
//
////o(n^2)
//cout<<longest_Palindrome3(s)<<endl;

}
