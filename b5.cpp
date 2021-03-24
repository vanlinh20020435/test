#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int r;
    srand((int)time(0));
    for(int i = 0; i < 5; ++i){
        r = rand();
        cout<<r<<" ";
    }    
	return 0;
}
