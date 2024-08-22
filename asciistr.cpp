#include<iostream>
#include<string>
using namespace std;

void ascii1(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    ascii1(ros,ans);
    ascii1(ros,ch+ans);
    ascii1(ros,ans+ to_string(code));
}

int main(){

    string s="AB";
    ascii1(s,"");
    return 0;
}