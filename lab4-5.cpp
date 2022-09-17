#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[10];
    cin.get(str, 10);
    int len = strlen(str);

    if(len >= 2 && str[0]=='a' && str[1]=='*'){
        cout << "pattern 1\n";
    }
    else if(len >= 4 && str[0]=='a' && str[1]=='*' && str[2]=='b' && str[3]=='+'){
        cout << "pattern 2\n";
    }
    else if(len >= 3 && str[0]=='a' && str[1]=='b' && str[2]=='b'){
        cout << "pattern 3\n";
    }
    else{
        cout <<"Out of the pattern\n";
    }
    return 0;
}
