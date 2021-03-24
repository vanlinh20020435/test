#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cin>>n;
    for(i=0;i<2*n-1;i++){
        m=n;
        for(j=0;j<2*n-1;j++){
            if(i<n-1){
                if(j<=i){
                    cout<<m<<" ";
                    if(j<i) m--;
                }
                else if(i+j>=2*n-2){
                    if(i+j>2*n-2) m++;
                    cout<<m<<" ";
                }
                else cout<<m<<" ";
            }
            else{
                if(i+j<=2*n-2){
                    cout<<m<<" ";
                    if(i+j<2*n-2)m--;
                }
                else if(j>=i){
                    if(j>i) m++;
                    cout<<m<<" ";
                }
                else cout<<m<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
