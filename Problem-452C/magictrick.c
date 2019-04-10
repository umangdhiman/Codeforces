#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&n,&m);
	if(m==1&&n==1){
		printf("1.00");
	}
	else{
		printf("%.9lf",double((1+(n-1)*(m-1)/(n*m-1.0))/n));
	}
	return 0;
}
