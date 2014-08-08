#include<iostream>
using namespace std;
int main(){
    int x=1,n,m,i,s=0;
    int a[100];
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        if(s>m){
            x++;
            s=a[i];
        }
    }
    cout<<x;
    return 0;
}

