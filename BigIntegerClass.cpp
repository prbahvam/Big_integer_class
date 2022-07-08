#include <iostream>
#include <string.h>

#define ll long long
#define loopf(i,a,b) for(ll i = a;i<b;i++)
#define loopb(i,a,b) for(ll i = a;i>b;i--)


class BigIntegerClass
{

    bigint(){
        str = "";
    }
    bigint(const string &x){
        str = x;
    }
    bigint(const char* x){
        str = x;
    }

    ll length() const {
        return str.size();
    }

    void Push_back(char s)
    {
       if((s - '0'<0||s-'0'>9)&&s!='-')
            throw invalid_argument("Invalid argument");
        else
            str.push_back(s);
    }

    void Reverse()
    {
        reverse(str.begin(),str.end());
    }
};