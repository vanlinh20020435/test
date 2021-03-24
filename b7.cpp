#include<iostream>
#include<string>
using namespace std;
int main(){
	float x,y;
	cin>>x>>y;
	float tong=0;
	for(int i=0;i<y;i++) x=x*(1+0.007);
	cout<<x;
	return 0;
}
