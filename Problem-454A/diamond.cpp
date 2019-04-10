#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n,i,j,x;
    cin>>n;
    if(n%2==0||n<3||n>101)
        exit(0);
    for(i=0;i<=n/2;i++){
        for(j=0;j<n;j++){
            if(i+j>=n/2&&((j-i)>0?j-i:i-j)<=n/2)
                cout<<"D";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    for(;i<n;i++){
        x=n-1-i;
        for(j=0;j<n;j++){
            if(x+j>=n/2&&((j-x)>0?j-x:x-j)<=n/2)
                cout<<"D";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

