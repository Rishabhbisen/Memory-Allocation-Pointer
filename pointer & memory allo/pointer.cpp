#include<bits/stdc++.h>
using namespace std;

int main(){

    //simple way to decrale pointer

    //simple interger pointer
    int a = 5;
    int *ptr = &a; //pointer created
    cout<<"value of pointer "<<*ptr<<endl;
    cout<<"adress of pointer "<<*ptr<<endl;

    //character pointer
    char b = 'a';
    char *ptr2 = &b;
    cout<<*ptr2<<endl;

    // string pointer
    string name1 = "rishabh is a good boy";
    string *ptr4 = &name1;
    cout<<*ptr4<<endl;

    //array pointer
    int arr[5] = {1,2,3,4,5};
    int *ptr1 = arr;
    cout<<"it will print array value "<<*ptr1<<endl;
    cout<<"it will print adress of array "<<arr<<endl;

    //char array pointer
    char *name2[3] = {"rishabh","bisen","good"};
    for(int i = 0; i < 3; i++){
        cout<<name2[i]<<endl;
    }


    return 0;
}