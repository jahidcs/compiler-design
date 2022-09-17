#include<bits/stdc++.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

using namespace std;

string input;
string pattern[] = {"int", "EOPE", "(E)", "+", "-", "*", "/", "="};
string reduce[] = {"E", "E", "E", "op", "op", "op", "op", "op"};

string output = input;
bool completed = false;

void reduce_once(){
    int i, pc, p;
    string a, b;
    pc = sizeof(pattern) / sizeof(pattern[i]);

    for(int i = 0; i < pc; i++){
       a = pattern[i];
       b = reduce[i];

       if(output.find(a) != string::npos){
            p = output.find(a);
            output.replace(p, a.length(), b);

            break;
       }
    }

    if(i == pc){
        completed = true;
    }
}

int main(){
    getline(cin, input);
    while(completed == false){
        reduce_once();
    }

    if(output == "E"){
        cout << "Valid";
    }
    else{
        cout << "INVALID";
    }

    return 0;
}
