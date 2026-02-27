#include <iostream>
#include <vector>
using namespace std;

//finding the pivot in an sorterd rotated array
/*int getPivot(int arr[],int n){
    int start =0;
    int end =n-1;
    int mid = start + (end-start)/2;

    //note this code works only when the rotataion has happend less than n times, 
    // that is the array has been rotated and is not the same as original array
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    // int n;
    // cin>>n;

    int arr[5]={1,2,3,4,6};
    cout<< " the pivot is : "<<getPivot(arr,5)<<endl;
    
}*/

//same question but perfect appraoch for handling edge cases, leetcode special
/*int getPivot(int arr[],int n){
    int start =0;
    int end =n-1;
    int mid = start + (end-start)/2;

    //this works on all the cases, if arr[2] or if arr is not rotated
    while(start<end){
        if(arr[mid]>arr[end]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    // int n;
    // cin>>n;

    int arr[5]={1,2,3,4,6};
    cout<< " the pivot is : "<<getPivot(arr,5)<<endl;
    
}*/


//finding the square root in leetcode, in same question we only find the integer part
//but we can also find the decimal part depending on how much precision we are needed

#include <iomanip>
long long int sqrtAns(int x){
        int start =0;
        int end = x;
        long long int mid = start + (end-start)/2;

        int ans =1;
        while(start<=end){
            long double square = mid*mid;
            if(square==x){
                return mid;
            }
            if(square > x){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }  
        return ans;
}
//calculating the floating value of the square root
long double precisionAns(long double x, int precision, int tempAns){
    float factor = 1;

    double finalAns = tempAns;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=finalAns;j*j<x;j+=factor){
            finalAns = j;
        }
    }
    return finalAns;
}

int main(){
    int x;
    cin>>x;

    long double tempAns = sqrtAns(x);
    cout<< "square root is: "<<precisionAns(x,3,tempAns);
}