#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// => we will reverse string word wise , eg : "Anmol is King" => will become "king is Anmol"
//leetcode 186 
/*void reverseWord(vector<char> &s){
    //reverse the array first
    

    //reversing each word
    int j=0;
    for(int i=0;i<=s.size();i++){
        if(i == s.size() || s[i]==' '){
            reverse(s.begin()+j,s.begin()+i);
            j=i+1;
        }
    }
    
    reverse(s.begin(),s.end());
}
int main(){
    string temp = "Anmol is King";
    vector<char> s(temp.begin(),temp.end());

    //vector char cannot take cin input like char array
    reverseWord(s);

    for(char ch:s){
        cout<<ch;
    }

}*/

//getting most occuring character in string
char checkmaxOccur(string &s){
    //creating an array for counting the frequency, can se hashmap as well
    int arr[26] = {0};

    //counting freq
    for(int i=0;i<s.length();i++){
        int index = 0;
        if(s[i]>='a' && s[i]<='z'){
            index = s[i] - 'a';
        }
        else{
            index = s[i] - 'A';
        }
        arr[index]++;
    }

    //checking the freq
    int maxfreq = -1;
    int ansChar = 0;

    for(int i=0;i<26;i++){
        if(maxfreq < arr[i]){
            maxfreq = arr[i];
            ansChar = i;
        }
    }
    return ansChar + 'a';
}
int main(){
    string s;
    //cin>>s;

    //for multiple line
    getline(cin,s);
    
    cout<<"max char is: "<<checkmaxOccur(s);
}