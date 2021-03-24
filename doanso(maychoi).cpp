
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int getnumber(){
	int number;
	cout<<"Nhap So Ban Muon(Tu 1 Den 100): ";
	cin>>number;
	return number;
}
void printAnswer(char &kt){
    cout<<"Print Your Answer(>;<;=): ";
    cin>>kt;
}
int selectNumber(int low, int high){
    int number=(low+high) / 2;
    cout<<number<<endl;
return number;
}
bool choitiep(){
    int x;
    cout<<"Do You Want To Play Again(1:To Play; Esle:To Quit)"<<endl;
    cin>>x;
    if(x==1)return true;
    else return false;
}
int main(){
	int bien,doan,low,hight,dem;
	char kt;
	do{
        dem=0;low=1;hight=100;
		bien=getnumber();
		do{
			doan=selectNumber(low,hight);
			printAnswer(kt);
			if(kt=='>') hight=doan-1;
			else if(kt=='<') low=doan+1;
			dem++;
	    }
	    while(kt!='=');
	    cout<<"Vay So Do La: "<<doan<<endl<<"So Lan May Can Doan: "<<dem<<endl;
    }
	while(choitiep());
	return 0;
}
