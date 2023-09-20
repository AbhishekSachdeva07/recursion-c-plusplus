//remove duplicates from string
#include <iostream>
#include <string.h>
using namespace std;
void removedup(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]==s[1])
    {
        s=s.substr(1);
    }
    else
    {
        cout<<s[0];
        s=s.substr(1);
    }
    removedup(s);
}
int main()
{
    string s;
    cin>>s;
    removedup(s);
    
    return 0;
}
