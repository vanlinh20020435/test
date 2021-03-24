#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int i;
	for(i=0;i<=100;i++){
		system("cls");
		cout<<"\t\t\t\t\tHAPPY TEACHER'S DAY 20/11"<<endl;
		cout<<"\t\t\t\t     GUI TANG DEN CAC THAY CO CUA EM"<<endl;
		cout<<"\t\t\t\t\t      LOADING..."<<i<<"%"<<endl;
		cout<<"________________________________________________________________________________________________________________________"<<endl;
		if(i==20){
			cout<<"\t\t\t\t\t\t  2\n"<<endl;
			cout<<"\t\t\t\t       NHAN NGAY NHA GIAO VIET NAM";
			Sleep(5000);
		}
		if(i==40){
			cout<<"\t\t\t\t\t\t  20\n"<<endl;
			cout<<"\t\t\t\t    EM CHUC THAY CO LUON LUON MANH KHOE";
			Sleep(5000);
		}
        if(i==60){
        	cout<<"\t\t\t\t\t\t  20-\n"<<endl;
        	cout<<"\t\t\t\t\tTHANH CONG TRONG CUOC SONG";
        	Sleep(5000);
		}
        if(i==80){
        	cout<<"\t\t\t\t\t\t  20-1\n"<<endl;
        	cout<<"\t\t\t\t   DAT NHIEU THANH TICH TRONG SU NGHIEP";
        	Sleep(5000);
		}
        if(i==100){
        	cout<<"\t\t\t\t\t\t  20-11\n"<<endl;
        	cout<<"\t\t\t      NHIET LIET CHAO MUNG NGAY NHA GIAO VIET NAM 20-11";
        	Sleep(10000);
		}
	}
	return 0;
}
