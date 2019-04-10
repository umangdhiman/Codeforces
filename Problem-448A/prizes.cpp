#include<iostream>
using namespace std;
int main(){
    int i,s1,s2,a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    s1=a1+a2+a3;
    s2=b1+b2+b3;
    for(i=0;i<n;i++){
        if(s1>5){
            s1=s1-5;
            if(s1==0&&s2==0){
                cout<<"YES";
                return 0;
            }
            continue;
        }
        else if(s1>0&&s1<=5){
            s1=0;
            if(s1==0&&s2==0){
                cout<<"YES";
                return 0;
            }
            continue;
        }
        if(s2>10){
            s2=s2-10;
            if(s1==0&&s2==0){
                cout<<"YES";
                return 0;
            }
            continue;
        }
        else if(s2>0&&s1<=10){
            s2=0;
            if(s1==0&&s2==0){
                cout<<"YES";
                return 0;
            }
            continue;
        }
        if(s1==0&&s2==0){
            cout<<"YES";
            return 0;
            }
    }
    cout<<"NO";
    return 0;
}

