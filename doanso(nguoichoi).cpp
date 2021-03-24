#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
void printAnswer(int number, int randomNumber){
if (number > randomNumber) {
cout << "Your number is too big." << endl;
} else if (number < randomNumber) {
cout << "Your number is too small." << endl;
} else {
cout << "Congratulation! You win." << endl;
}
}
void getPlayerGuess(int &number){
cout << endl << "Enter your number between 1 and 100: ";
cin >> number;
}
bool choitiep(){
    int x;
    cout<<"Do You Want To Play Again(1:To Play; Esle:To Quit)"<<endl;
    cin>>x;
    if(x==1)return true;
    else return false;
}
int main() {
   srand((int)time(0));
   int bien,x,dem;
   int doan;
   do{
   	bien=random(1,100);
   	do{
        dem=0;
   		getPlayerGuess(doan);
   		printAnswer(doan,bien);
   		dem++;
	}
	while(bien!=doan);
	cout<<"So Lan Ban Doan: "<<dem<<"Diem So: "<<(100-dem)<<endl<<endl;
   }
   while(choitiep());
    return 0;
}
