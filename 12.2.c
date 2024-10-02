#include<stdio.h>
double *max(double *pa,int n){
	int i,j=0;
	double *s;
	for(i=0;i<n;i++){
		if(*(pa+i)==0){
			s = pa+i; j=1;
		}
	}if(j==0){
		s = pa;
		for(i = 1;i<n;i++){if(*s<*(pa+i))s=pa+i;}
	return s;
	}
}
int main(){
	int i;
	double a[5]={3,4,5,6,0};
	for(i=0;i<5;i++){
		printf("&a[%d]=%p\n",i,a+i);
	printf("max=%p",max(a,5));
	}
	return 0;
}
