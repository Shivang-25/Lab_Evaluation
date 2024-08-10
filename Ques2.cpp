#include <bits/stdc++.h>
using namespace std;

int main() {

    string str = "";
    cout << "Enter a paragraph: " << endl;
    getline(cin, str);

    int l = str.length();
    cout << "Character : Frequency " << endl;
    for(int i=0;i<l;i++) {
        int c = 0;
        char ch = str.at(i);
        for(int j=0;j<l;j++) {
            if(str[i] == str[j]){
                c++;
            }
        }
        cout << ch << " : " << c << endl;
    }
    return 0;
}
