#include<iostream>
using namespace std;
string caesarCipher(string s, int k) {
    char kt;
    for(int i=0;i<s.length();i++){
        kt=s[i];
        if((kt>='A'&&kt<='Z'-k)||(kt>='a'&&kt<='z'-k)){
            s[i]=kt+k;
        }
        else if((kt<='Z'&&kt>'Z'-k)||(kt<='z'&&kt>'z'-k)){
            s[i]=kt-26+k;
        }
    }
    return s;
}
int main(){
    string s;
    int k;
    cin>>s>>k;
    cout<<caesarCipher(s,k);
	return 0;
}

