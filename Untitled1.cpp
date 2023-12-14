#include <stdio.h>
main(){
	int i,n,j,tg,a[10];
	do{
		printf("\nNhap n(n<0)= "); scanf("%d", &n);
	}while(n<=0);
	printf("\nNhap mang \n");
	for(i=0;i<n;i++){
		printf("a[%d]= ", i); scanf("%d", &a[i]);
	}
	printf("\nCac phan tu mang vua nhap la: ");
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	
	int tong=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0) tongc=tongc+a[i];
		printf("\n Tong cac phan tu chan = %d", tongc);
	}
	
	for(i=0;i < n - 1; i++)
	for(j=i+1;j<n;j++){
		if(x[i] > x[j]){
			tg=x[i];
			x[i] = x[j];
			x[j] = tg;
		}
	}
	
}
