#include<bits/stdc++.h>
using namespace std;

//sum of all dynamic array
int sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    //all this is going on dynicmically in heap memory

    int *ptr = new int;
    *ptr = 23;
    cout<<*ptr<<endl;

    delete ptr; //if we will not deallocate the memory so memory leak problem will occur

    char *ch = new char;
    *ch = 'a';
    cout<<*ch<<endl;
    delete ch;

    //dynamic array creat in heap memory
    // int *arr = new int[5]; // this is one type we can create
    // now we are creating variable size array
    cout<<"enter"<<endl;
    int n;
    cin>>n;


    int *arr = new int[n];
    //dynamic array input
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = sum(arr, n);
    cout<<"sum of array is "<<ans<<" ";

    delete []arr;  // realse the memory


    return 0;
}