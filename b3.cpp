#include<iostream>
using namespace std;
//bool kiemtrasnt(int n){
//    int dem=0;
//    for(int i=2;i<n;i++){
//        if(n%i==0){
//            dem=1;
//            break;
//        }
//    }
//    if(dem==0) return true;
//    else return false;
//}
int main(){
    int i,n=10000;
    bool a[10000];
    for(i=0;i<n;i++) a[i]=true;
    for(i=2;i<10000;i++){
        if(a[i]==true){
            for(int j=i+i;i<n;j+i) a[j]=false;
        }
    }
	for(i=2;i<10000;i++){
        if(a[i]==true) cout<<i<<" ";
	}
	return 0;
}
