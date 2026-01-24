#include <iostream>
using namespace std;

//applying bitwise operation on a and b 
/*int main(){
    int a =5;
    int b=6;

    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"~a "<<(~a)<<endl;
    // cout<<"a^b "<<(a^b)<<endl;

    //right and left shift operator

    cout<<(17<<2)<<endl;
    cout<<(19>>2)<<endl;

    int i=6;

    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(--i)<<endl;
    cout<<(i--)<<endl;  
} */

//for loop for cpp printing fibonacci series
/*int main(){
    int n =10;
    int a =0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){
        int fibsum = a+b;
        cout<<fibsum<<" ";
        a=b;
        b=fibsum;
    }
}*/

//check prime using for loop
/*int main(){
    int n;
    cin>>n;

    bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<n<<" is Prime";
    }
    else{
        cout<<n<<" is not Prime";
    }
}*/

//variable scoping 
int main(){
    int a=1;
    for(int i =0;i<3;i++){
        int b=4;
        int a=10;
        cout<<a;
    }
    //int a=15;
    //error since a is already defined in this scope 
    //cout<<b;
    //error since c is not part of this block and only varibale in this or outside block can be called

}