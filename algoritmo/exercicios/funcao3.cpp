#include<stdio.h>
int maior(int n1,int n2){
	if(n1>n2){
	return n1;
	}else{
		return n2;
	}
}

main(){
	int n1, n2;
	printf("Informe dois numeros inteiros:");
	scanf("%d %d",&n1,&n2);
	printf("Maior=%d",maior(n1,n2));
}




