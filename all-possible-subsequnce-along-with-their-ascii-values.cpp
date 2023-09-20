#include <iostream>
using namespace std;
void printt(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code = ch;
    string ros = s.substr(1);
    printt(ros,ans);
    printt(ros,ans+ch);
    printt(ros,ans+to_string(code));

}
int main()
{
    string s;
    cin>>s;
    printt(s,"");
    
    return 0;
}
