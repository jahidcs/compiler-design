#include<bits/stdc++.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

using namespace std;


int main(){
    int a = 10;
    int *p;
    p = &a;
    cout <<"Momory address of a : " << &a << endl;
    cout << "Memory address of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;


    return 0;
}
