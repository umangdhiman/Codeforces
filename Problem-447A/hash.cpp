#include<iostream>
using namespace std;
int main(){
    int i,j,p,n;
    unsigned long int x[300],y[300],h[300];
    cin>>p>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<n;i++){
        h[x[i]]=x[i]%p;
        y[i]=h[x[i]];
        for(j=0;j<i;j++){
            if(y[j]==h[x[i]]){
                cout<<i+1;
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}

