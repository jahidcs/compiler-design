#include<bits/stdc++.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

using namespace std;

bool isOperator(char ch){
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=';
}

int main(){
    void *p, *address_table[100];
    char values_table[100];

    char str[50];
    cin.get(str, 50);

    int i;
    int at_index = 0;
    int vt_index = 0;
    char c;

    for(i = 0; i < strlen(str); i++){
        c = str[i];
        if(isalpha(c)){
            p = malloc(c);
            address_table[at_index] = p;
            values_table[vt_index];

            at_index++;
            vt_index++;

            cout << c << "\t" << p << "\t" << "Identifier" << endl;
        }
        else{
            cout << c << "\t\t";
            if(isOperator(c)){
                cout << "\tOperator"<< endl;
            }
            else if(c >= '0'){
                cout << "\tInteger" << endl;
            }
            else{

            }
        }
    }

    cout << "enter a value to search"<< endl;
    getchar();
    char s;
    cin.get(s);
    void *s_address;
    s_address= NULL;
    for(i = 0; i < vt_index; i++){
        if(values_table[i] == s){
            s_address = address_table[i];
        }
    }

    if(s_address == NULL){
        cout << s << " Doesn't exist" << endl;
    }
    else{
        cout << "Memory address of" << s << "is: " << s_address;
    }

    return 0;
}
