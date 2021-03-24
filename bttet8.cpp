#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s1, s2;
    vector<string>s3;
    int index=0;
    for (int i = 0; i < s.size()-1; i++) {
        s1=s;
        s1.erase (s1.begin()+i);
        s2 = s1;
        for (int j = i; j < s1.size(); j++) {
            s2.erase (s2.begin()+j);
            s3.push_back(s2);
            index++;
            s2 = s1;
        }
    }
    for (int i = 0; i < index; i++) {
        cout << s3[i] << " ";
    }
    return 0;
}
