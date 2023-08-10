#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a=9;
    // //pointer to integer
    // int *p;
    // p=&a;
    // cout<<*p<<endl;
    // int ar[]={1,3,4,5,67};
    // int *q;

    // q = ar;
    // cout<<*q<<endl; //1

    // // q = &ar[1];
    // // cout<<*q<<endl; //3

    // // cout<<q<<endl;
    // // q++; //address + size of data(4)
    // // cout<<q<<endl;
    // // cout<<*q<<endl; //4

    // // q=&ar[6];
    // // cout<<*(q-4)<<endl;

    // // cout<<ar[2]<<endl;     //ar[i]==*(ar+i)
    // // cout<<*(ar+2)<<endl;
    // // cout<<*(2+ar)<<endl;
    // // cout<<2[ar]<<endl;
    // // cout<<5[ar]<<endl;
    // // cout<<*ar<<endl;

    // cout<<*ar+1<<endl; //2
    // cout<<ar<<endl;



    // cout<<ar+1<<endl;
    // cout<<&ar[0]+1<<endl;



    // cout<<(&ar+1)<<endl; //ye niche same
    // cout<<(&ar[4]+1)<<endl; //ye upar
    
    // cout<<ar+1<<endl;



    int x[5];
    int *y=x; 
    for (int i=0 ; i<5; i++){
        cin>>y[i]; //*(x+i) ,, x[i] ,, i[x] , y[i] ,i[y]
    }


    for (int i=0 ; i<5; i++){
        cout<<y[i]<<" ";
    }

    
    return 0;
}