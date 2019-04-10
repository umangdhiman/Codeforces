#include<iostream>
using namespace std;
int main(){
    unsigned long int n,a[100000];
    int i,sum=0,x,mx,j,y,max=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    for(i=0;i<n;i++){
        x=0;
        y=0;
        for(j=0;j<n;j++){
            if(i==j)
                continue;
            if(a[j]==(a[i]-1))
                x++;
            if(a[j]==(a[i]+1))
                y++;
        }
        mx=sum-x*(a[i]-1)-y*(a[i]+1);
        if(mx>max)
            max=mx;
    }
    cout<<max;
    return 0;
}

