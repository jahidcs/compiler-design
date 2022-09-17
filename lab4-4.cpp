#include<bits/stdc++.h>

using namespace std;

int main(){
    char variable[50];
    cin.get(variable, 50);
    int len = strlen(variable);
    char c;
    int marker = 1;

    if(len == 0){
        cout << "Invalid Variable declaration\n";
    }
    else if(!isalpha(variable[0]) && variable[0] != '_'){
        cout << "Invalid Variable declaration\n";
    }
    else{
        for(int i = 0; i < len; i++){
            c = variable[i];
            if(!isalnum(c) && c != '_'){
                marker = 0;
                break;
            }
        }

        if(marker == 0){
            cout << "Invalid Variable declaration\n";
        }
        else{
            cout << "Valid\n";
        }
    }
}
