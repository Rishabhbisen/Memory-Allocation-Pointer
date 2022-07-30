#include<bits/stdc++.h>
using namespace std;

int main(){
    int ptr1[5];
    int *ptr2[5];

    cout<<"enter the number"<<endl;

    for(int i = 0; i < 5; i++){
        cin>>ptr1[i];
    }

    for(int i = 0; i < 5; i++){
        ptr2[i] = &ptr1[i];
    }

    cout<<"the value are "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<*ptr2[i]<<endl;
    }

    //it will print only single value
    int arr[5]= {1,2,3,4,5};
    int *ptr = arr;
    cout<<*ptr;

    return 0;
}