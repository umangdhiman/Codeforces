#include<stdio.h>
#include<string.h>
int main(){
	int n,i,flag,j;
	char str[8];
	char *s[]={"vaporeon","jolteon","flareon","espeon","umbreon","leafeon","glaceon","sylveon"};
	scanf("%d",&n);
	scanf("%s",str);
	for(i=0;i<8;i++){
		flag=1;
		if(strlen(s[i])==n){
			for(j=0;j<n;j++){
				if(str[j]!='.'&&str[j]!=s[i][j]){
					flag=0;
				}
			}
			if(flag){
				printf("%s",s[i]);
			}
		}
	}
	return 0;
}
