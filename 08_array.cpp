#include <iostream>
using namespace std;

/*int main(){
    // int arr[100]={0};
    // for(int i=0;i<100;i++){
    //     cout<<arr[i];
    // }

    int arr1[100];
    fill(arr1,arr1+100,5);
    //to fill the entire array with  same character

    for(int i=0;i<100;i++){
        cout<<arr1[i];
    }

    cout<<" \nThe value of arr[6] can be directly accessed "<<arr1[6];
    
}*/

/*int main(){
    char ch[5]={'a','a','g','y','k'};
    cout<<ch[3];
}*/

#include <climits>
//creating an array and printing max and min using functions
int maxValue(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minValue(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //can use max(maxValue,arr[i]) function to find the max or min in similar way

    cout<<"max value is : "<<maxValue(arr,size)<<endl;
    cout<<"min value is : "<<minValue(arr,size);
}