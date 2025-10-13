#include<iostream>
using namespace std;

// pattern part two 

/*
int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<j;
            j+= 1;
        }
        cout<<endl;
        i+=1;
    }
}*/

//2.reverse of the previous pattern eg - 654321 and many more rows
/*
int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<n-j+1;
            j+= 1;
        }
        cout<<endl;
        i+=1;
    }
}*/

//3. 123 456 789 type pattern(3x3)
/*int main(){
    int n;
    cin>>n;

    int i =1;
    int count =1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count += 1;
            j += 1;
        }
        cout<<endl;
        i+=1;
    }
}*/

//4. star triangle pattern 

/*int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            //cout<<i for printing 1 22 333 4444 instead of stars 
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}*/

//5.  pattern 1 23 456 78910
/*int main(){
    int n;
    cin>>n;
    int count = 1;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }   
    
}*/

//6. pattern 1 23 345 4567
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j =1;
        int value = i;
        while(j<=i){
            cout<<value<<" ";
            //we are taking different new (value) instead of printing j since j value cannot be changed cauz we need it for traversal j<=i
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//7. same pattern in different approach
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j+i-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//8. reverse triangle 1 21 321 4321
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//9. pattern of AAA BBB CCC
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}*/

//10. pattern ABC ABC ABC
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//11. pattern ABC DEF GHI
/*int main(){
    int n;
    cin>>n;

    int i =1;
    char ch ='A';
    while(i<=n){
        int j=1;
        while(j<=n){
           cout<<ch;
           ch++;
           j++; 
        }
        cout<<endl;
        i++;
    }
}*/

//12. pattern ABC BCD CDE
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//now triangular patterns using abcd
//13. pattern A BB CCC
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = 'A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//14. pattern A BC DEF GHIJ
/*int main(){
    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//reverse abcd pattern D CD BCD ABCD
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j=1;
        char ch = 'A'+n-i;
        //char ch = 'A'+i-1;
        while(j<=i){
            //char ch = 'A'+ n-i+j-1;
            //this is second way to do it inner loop and including j in formula
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern with space so using double inner loop
//pattern ---* --** -*** **** reverse triangle
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern **** *** ** * , note this is not right code since i am trying to print space that we dont need to print
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        int space = 1;
        // while(space<=n-1){
        //     cout<<"!";
        //     space++;
        //     //this is actually printing more space than required in every row but not visible
        // }
       while(space<=i-1){
            cout<<" ";
            space++;
            //this correctly prints the desired no of spaces, only if we initiate space = 1, since it skips for i=1, space =1 != <=i-1,so no space in 1st line then 1 in 2nd
       }
        //also this above can be written using the logic space = i-1 and in the while loop while(space), hence using the boolean logic instead of greater than less to
        cout<<endl;
        i++;
    }
}*/

//upper code without space printing challenge
/*int main(){
    int n;
    cin>>n;

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}*/

//pattern **** -*** --** ---*
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
            //here we coiuld also use while(space<=i-1) and space=1;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;

    }
}*/

//H.W patterns 1-> 1111 222 33 4
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

// pattern 2->  ---1 --22 -333 4444
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 3-> 1234 -234 --34 ---4
/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//pattern 4-> ---1 --23 -456 78910
/*int main(){
    int n;
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}*/

//last pattern hard 
/*
   1
  121
 12321
1234321
*/

/*int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int temp=j;
        //cout<<j<<"!";
        while(j<=(2*i-1)){
            cout<<temp-2;
            j++;
            temp--;
        }
        cout<<endl;
        i++;
    }
}*/ 
//note -> the above code is self done and is correct, m-II from the course below 
/*int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}*/

//final pattern 1234554321 1234**4321 123****321
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int star = 2*i-2;
        while(star){
            cout<<"*";
            star--;
        }
        int start = n-i+1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}