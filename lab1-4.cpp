#include <bits/stdc++.h>

using namespace std;

int main(){
    char str1[20], str2[20];
    cin.get(str1, 20);
    getchar();
    cin.get(str2, 20);


    if(strcmp(str1, str2) == 0){
        cout << "Duplicate";
    }
    else
        cout << "Different";


    return 0;
}
