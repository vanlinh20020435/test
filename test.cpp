#include<iostream>
using namespace std;
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int h=a[j];
				a[j]=a[j-1];
				a[j-1]=h;
			}
		}
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={1,5,8.6,3,7,5,8,0,1,0,2,3,5,6,8,0,5,7,6,2,9};
	int n=sizeof(a)/sizeof(2);
	sapxep(a,n);
	in(a,n);
	return 0;
}
