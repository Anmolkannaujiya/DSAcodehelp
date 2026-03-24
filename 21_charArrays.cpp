#include <iostream>
using namespace std;

// =>working with char arrays
/*int main(){
    //initialising 
    char name[20];

    cout<<"Enter your name : ";
  
    //input to char array : just type ANMOL in terminal
    cin>>name;
    // name[2] = 'd';
    name[2] = '\0';

    //output
    cout<<endl;
    cout<<"the name is : "<<name;

    //whitespace = termination

}*/

// =>finding length of string that we pass to the char array
/*int findLength(char opinion[]){
    //in array we needed to pass the size as well, not required in char

    int counter = 0;
    for(int i=0; opinion[i]!='\0';i++){
        counter++;
    }
    return counter;
    
    //m-II
    // int i=0;
    // while(opinion[i]!='\0'){
    //     i++;
    // }
    // return i;
    //note i is at 5th index where \0 is but since it starts at 0, it will be ans and not i-1;
}
int  main(){
    char opinion[30];
    cout<<"give opinion : ";

    cin >> opinion;
    cout << "opinion length "<<findLength(opinion);
}*/

// =>reverse a string in char array
void doreverse(char opinion[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(opinion[s],opinion[e]);
        s++;
        e--;
    }
}
int findLength(char opinion[]){
    int counter = 0;
    for(int i=0; opinion[i]!='\0';i++){
        counter++;
    }
    return counter;
}
int  main(){
    char opinion[30];
    cout<<"give opinion : ";

    cin >> opinion;
     
    //length 
    int n = findLength(opinion);
    doreverse(opinion,n);

    //print
    cout<<"printing "<<opinion;
}