#include <iostream>
#include <math.h>
using namespace std;
/*
int main(){
    int n;
    cin >> n;
    int num = 0;
    int i =0;
    while(n!=0){
        int bit = n&1;
        num = (bit * int(pow(10,i)))+num;
        n = n>>1;
        i++;
    }
    cout<<"number in binary form is "<< num;
    // this doesn't work precisely since pow convert into double then converting back into int makes value loss
}
    */

int main(){
    /*int n;
    cin >> n;
    int num = 0;
    int i =1;

    while(n!=0){
        int bit = n&1;
        num = bit * i + num;
        n = n>>1;
        i = i*10;
    }
    cout<<"number in binary form is "<< num;*/

    int n;
    cin>>n;

    int i=1;
    int num =0;

    while (n!=0){
        //int bit = n&1;
        //this wont work since we are giving input in int and not in binary, 110 will be something like 10110010

        int digit = n%10;
        if (digit!=0)
        {
            num = digit*i + num;
            
        }
        n = n/10;
        i = 2*i;
        
    }
    cout<<"the number is :"<<num;
    
}
