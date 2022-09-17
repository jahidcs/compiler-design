#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[] = "/* Test Comment";
    char a, b;
    a = str[0];
    b = str[1];

    if(a == '/' && (b == '/' || b == '*')){
        cout << "This is a comment";
    }
    else{
        cout << "This is not a comment";
    }

    return 0;
}
