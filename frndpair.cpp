#include<iostream>
using namespace std;

int frndpair(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return frndpair(n-1)+frndpair(n-2)*(n-1);
}

int main(){

    cout<<frndpair(4)<<endl;

    return 0;


}