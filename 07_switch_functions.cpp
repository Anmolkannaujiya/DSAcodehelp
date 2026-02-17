#include <iostream>
using namespace std;

/*int main(){
    int n = 5;
    switch(n){
        case 1:
            cout<<"wow";
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;
        default:
            cout<<"nothing";
    }

}*/

//calculator
/*int main(){
    float n,m;
    cin>>n>>m;
    char x;
    cin>>x;

    switch(x){
        case '+':
            cout<<n+m;
            break;       
        case '-':
            cout<<n-m;
            break;
        case '/':
            cout<<n/m;
            break;
        case '*':
            cout<<n*m;
            break;
        case '%':
            cout<<n%m;
            break;
        dafault:
            cout<<"try again";

    }
}*/

/*
#include <cstdlib>
int main() {
    char ch;

    while (cin >> ch) {   // loop until EOF
        switch (ch) {
            case '+':
                cout << "Addition\n";
                break;

            case '-':
                cout << "Subtraction\n";
                break;

            case 'q':
                cout << "Program terminated using exit()\n";
                exit(0);   // ⬅ HARD EXIT

            default:
                cout << "Invalid\n";
        }
    }

    cout << "This line will NEVER execute after exit()\n";
    //this code is for checking the workjing of the exit() functions
}*/

//h.w. question creating money note calculator
/*int main(){
    int amount;
    cin>>amount;
 
   int note_type = 1;
   while(amount!=0 && note_type<=4){
        switch (note_type)
        {
        case 1:
            cout<<"100 rs:"<<amount/100<<endl;
            amount %=100; 
            note_type++;
            break;
        case 2:
            cout<<"50 rs:"<<amount/50<<endl;
            amount %=50;
            note_type++; 
            break;
        case 3:
            cout<<"20 rs:"<<amount/20<<endl;
            amount %=20;
            note_type++; 
            break;
        case 4:
            cout<<"10 rs:"<<amount/10<<endl;
            amount %=10;
            note_type++; 
            break;
        
        default:
            cout<<"invalid";
            break;
        }
   }
}*/

////////////// functions ///////////////////////

//calculating power through function
/*int power(int a, int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    //cout<<"power of a is:"<<power(a,b);
    int answer = power(a,b);
    cout<<answer;
}*/

//to use the function for multiple 
/*int power(){
    int a,b;
    cin>>a>>b;

    int ans=1;
    for(int i=1;i<=b;i++){
        ans *=a;
    }
    return ans;
}
int main(){
    int ans = power();
    
    cout<<"power is :"<<ans<<endl;
    ans = power();
    cout<<"power is :"<<ans<<endl;
    //here to make the code shorter for reuse, where we dont declare int and call the func empty
    //we take input each time we call the function
}*/

//checking even or not thorugh fuction
/*bool isEven(int n){
    if(n&1){
        return false;
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"this is even"<<endl;
    }
    else{
        cout<<"this is odd";
    }

}*/

//ncr calculations using functions
/*int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int ncr(int n,int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    return num/denom;
}

int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;

    if(r>n){
        cout<<0;
        return 0;
    }
    cout<<"ncr of "<<n<<" and "<<r<<" :"<<ncr(n,r);

}*/

//check prime number thriough calling a function
/*bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    if(n==1){
        cout<<"not prime";
        return 0;
    }
    
    if(isPrime(n)){
        cout<<n<<" is a prime no"<<endl;
    }
    else 
        cout<<n<<" is a composite number";
}*/

//pass by value, value in main not affected by the functions use of it.
