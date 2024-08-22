#include<iostream>
#include<stack>
using namespace std;

void insertbottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();

    insertbottom(st,ele);

    st.push(topele);

}

void reverses(stack<int> &st){

    if(st.empty()){
        return;
    }

    int ele=st.top();
    st.pop();
    reverses(st);
    insertbottom(st,ele);

}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverses(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;


    return 0;
}