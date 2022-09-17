#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if(str1.find(str2) != string::npos){
        cout << "Yes";
    }
    else{
        cout << "No";
    }




    return 0;
}
