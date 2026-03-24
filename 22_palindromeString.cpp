#include <iostream>
using namespace std;

// =>to check if a string is a palindrome
// ignore uppercase or lower case treat them same
// ignore special characters

//check if valid character is present, insert it in new
/*bool isValid(char ch){
        if((ch >='a' && ch <= 'z') || (ch<='Z' && ch>='A')  || (ch >= '0' && ch <= '9')){
            return true;
        }
        else
            return false;
}

//convert to lowercase
char toLowerCase(char ch){
        if((ch >='a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            ch = ch - 'A' + 'a';
            return ch;
        }
}

//check palindrome
bool isPalindrome(string s) {
       
        string temp ="";
        for(int i=0; i<s.length();i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }

        }

        for(int i=0;i<temp.length();i++){
            temp[i] = toLowerCase(temp[i]);
        }

        int l=0;
        int r = temp.length()-1;

        while(l<r){
            if(temp[l] != temp[r])
                return false;
            else{
                l++;
                r--;
            }
        }
        return true;
        
}

int main(){
    string s ="abc*&(((ba";
    
    if(isPalindrome(s)){
        cout<<"valid";
    }
    else{
        cout<<"not valid";
    }
}*/

// => method 2 :- no new string creation, instead pure traversal
bool isValid(char ch){
        if((ch >='a' && ch <= 'z') || (ch<='Z' && ch>='A')  || (ch >= '0' && ch <= '9')){
            return true;
        }
        else
            return false;
}

char toLowerCase(char ch){
        if((ch >='a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            ch = ch - 'A' + 'a';
            return ch;
        }
}
bool isPalindrome(string s){
    int l =0;
    int r = s.length()-1;

    while(l<r){
        while(l < r && isValid(s[l])==false) l++;
        while(l < r && isValid(s[r])==false) r--;
        
        //note can use climit build in fun for checking alphanumeric
        // while(l < r && !isalnum(s[l]) ) l++;
        // while(l < r && !isalnum(s[r]) ) r--;

        if(l < r && toLowerCase(s[l]) != toLowerCase(s[r])){
            return false;
        }
        else{
            l++;
            r--;
        }
    }
    return true;

}
int main(){
    string s ="@@@@()";
    
    if(isPalindrome(s)){
        cout<<"valid";
    }
    else{
        cout<<"not valid";
    }
}