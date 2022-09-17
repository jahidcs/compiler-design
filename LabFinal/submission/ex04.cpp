#include<bits/stdc++.h>
using namespace std;

string get_operator(int c)
{
    if(c == '+')
        return "ADD";
    if (c == '*')
        return "MUL";
    return "";
}

int main()
{
    string input = "AB+CD*+E+"; //A+B+C*D+E
    char c;
    int i,tindex;
     stack <string> identifiers;

    string a,b,optr,tidentifier;



     tindex = 1;
    for(i = 0; i<input.length(); i++)
    {
        c = input[i];
        if(isalpha(c))
        {
            identifiers.push(string(1,c));
        }else
        {
           optr = get_operator(c);
           a  = identifiers.top();
           identifiers.pop();
           b = identifiers.top();
           identifiers.pop();

           printf("LDA \t %s\n", b.c_str());

           printf("%s \t %s\n", optr.c_str(),a.c_str());



          tidentifier = "T" + to_string(tindex);

           tindex++;



           printf("STA \t %s\n", tidentifier.c_str());
           identifiers.push(tidentifier);
        }
    }
    return 0;
}
