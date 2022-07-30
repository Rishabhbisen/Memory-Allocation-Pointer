#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"enter char lengh"<<endl;
    int m;
    cin>>m;
    cout<<"enter char"<<endl;
    char *ch = new char[m];

    for(int i = 0; i < m; i++){
        cin>>ch[i];
    }

    for(int i = 0; i < m; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;

    delete []ch;

    cout<<"enter another "<<endl;

    int n;
    cin>>n;
    string *st = new string[n];

    for(int i = 0; i < n; i++){
        cin>>st[i];
    }

    for(int i = 0; i < n; i++){
        cout<<st[i]<<" ";
    }

    delete []st;

    return 0;
}

//input 5 enter 5 char than enter 5 and enter 5 string