#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string v) {
    int leng=v.length();
    int j=leng-1,dem=0,i;
    for(i=0;i<leng;i++){
        if(v[i]==v[j]){
            j--;
        }
        else{
            dem++;
            break;
        }
    }
    if(dem==0) return -1;
    else if(v[j]==v[i+1]&&v[j-1]==v[i+2]) return i;
    else return j;
}

int main()
{
    string v;
    cin>>v;
    cout<<palindromeIndex(v);

    return 0;
}
