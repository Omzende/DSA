#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="75278592797";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;


    string a;
    cin>>a;

    int freq[26];
    for(int i=0;i<26;i++)
    freq[i]=0;

    for(int i=0; i<a.size(); i++ ){
        freq[a[i]-'a']++;
    }

    char ans='a';
    int maxf=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;

    return 0;
}

