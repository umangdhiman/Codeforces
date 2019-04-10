#include<iostream>
using namespace std;
int main(){
    int a[4],length,cal,i;
    string s;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>s;
    cal=0;
    for(i=0;i<s.size();i++){
        cal+=a[s[i]-'0'];
    }
    cout<<cal;
    return 0;
}

