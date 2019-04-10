#include<iostream>
#include<string.h>
using namespace std;
int main(){
        char str[1020];
        int k,j,i,length,max=-1,sum=0;
        int w[26];
        cin>>str>>k;
        length=strlen(str);
        for(i=0;i<26;i++){
                cin>>w[i];
                max=(w[i]>max?w[i]:max);
        }
        for(i=0;i<length;i++)
                sum+=((i+1)*w[str[i]-'a']);
        for(j=0;j<k;j++,i++)
                sum+=(i+1)*max;
        cout<<sum;
        return 0;
}

