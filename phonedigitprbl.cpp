#include<iostream>
#include<string>
using namespace std;

string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){

    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string code=keypadarr[ch-'0'];
    string ros=s.substr(1);

    for(int i=0;i<code.size();i++){
        keypad(ros, ans + code[i]);
    }
}

int main(){

    keypad("23","");
    return 0;
}
