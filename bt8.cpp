#include<iostream>
#include<string>
#include<vector>
using namespace std;
string layxaucon(string s,int i,int j,int x){
    char kt;
    string m="";
    for(int h=0;h<x;h++){
        if(h!=i&&h!=j){
            kt=s[h];
            m=m+kt;
        }
    }
    return m;
}
int main(){
    string s,s1;
    vector<string> v;
    cin>>s;
    int x=s.length();
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            s1=layxaucon(s,i,j,x);
            v.push_back(s1);
        }
    }
    for(int i=0;i<v.size();i++) cout<<v.at(i)<<" ";
    return 0;
}
