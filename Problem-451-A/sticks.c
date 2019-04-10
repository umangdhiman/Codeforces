#include<stdio.h>
#define MIN(X,Y) (X<Y?X:Y)
int main(){
	int n,m,y;
	scanf("%d%d",&n,&m);
	y=MIN(n,m);
	if(y%2)
		printf("Akshat");
	else
		printf("Malvika");
	return 0;
}	
