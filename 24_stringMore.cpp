#include <iostream>
#include <string>
#include <vector>

using namespace std;

//replace the space between words by @
void replaceSpace(string &s){
    //int i=0;
    //int n = s.size();
    // doing inplace changes changes the size as well, so no precalculated size
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            s.replace(i,1,"@40");
        }

    }
    //no return since doing it inplace
}
int main(){
    string s;

    cout<<"Enter the string :"<<endl;
    getline(cin,s);

    //cin.ignore();
    //cin after getline will wait for another input to clear the newline which will cause double input
    replaceSpace(s);
    cout<<"the replaced string is :"<<s;

}

//claude version of when the space between the words is uneven and not fixed as one space
//Yes exactly, that's where you'd use a loop + find approach instead of a single replace, since space lengths are uneven.

/*void replaceSpace(string &s, string sep = "-") {
    size_t pos = s.find(' ');
    
    while (pos != string::npos) {
        size_t end = s.find_first_not_of(' ', pos);  // where spaces end
        int spaceLen = end - pos;                     // how many spaces
        
        s.replace(pos, spaceLen, sep);               // replace entire space chunk
        
        pos = s.find(' ', pos + sep.size());         // find next space
    }
}

int main() {
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s);

    string sep;
    cout << "Enter the separator: " << endl;
    getline(cin, sep);

    replaceSpace(s, sep);
    cout << "The replaced string is: " << s << endl;

    return 0;
}*/