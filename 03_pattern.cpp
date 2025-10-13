#include<iostream>
using namespace std;

// lecture 03 pattern star sqaure and number square
/*
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
}*/

int main(){
    int n;
    cin>>n;
    cout<<endl;

    int i =1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<i;
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
}