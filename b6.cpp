#include<iostream>
using namespace std;
int main(){
	long long n,i,tong;
	cin>>n;
	tong=0;
	for(i=1;i<n;i++){
		if(n%i==0) tong=tong+i;
	}
	if(tong==n) cout<<"true";
	else cout<<"false";
	return 0;
	
}

