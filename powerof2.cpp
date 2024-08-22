#include<iostream>

using namespace std;
int power2(int n){
    return (n && !(n & n-1));
}

int noof1(int n){
    int count=0;
    while(n){
        n= n & (n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<power2(14)<<endl;
    cout<<noof1(19)<<endl;

    return 0;

}