#include<iostream>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratmaze(int** arr,int x,int y,int n,int** solarr){

    if(x==n-1 && y==n-1){
        solarr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(ratmaze(arr,x+1,y,n,solarr)){
            return true;
        }
        if(ratmaze(arr,x,y+1,n,solarr)){
            return true;
        }
        solarr[x][y]=0;
        return false;
    }

    return false;
}

int main(){

    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int** solarr=new int*[n];
    for(int i=0;i<n;i++){
        solarr[i]=new int[n];
        for(int j=0;j<n;j++){
            solarr[i][j]=0;
        }
    }
    if(ratmaze(arr,0,0,n,solarr)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solarr[i][j]<<" ";
        }cout<<endl;
    }


    }

    return 0;
}

/*1 0 1 0 1
  1 1 1 1 1
  0 1 0 1 0
  1 0 0 1 1
  1 1 1 0 1*/