#include <conio.h>
#include <stdio.h>
int Nhap(int a[], int N){
	for(int i=0; i<N; i++){
		printf("\nNhap tu thu %d: ",i);
		scanf("%d", &a[i]);
	}
}
int InMang(int a[], int N){
	for(int i=0; i<N; i++){
		printf("%d ", a[i]);
		printf("\n");
	}
}

int SapXep(int a[], int N){
	int t;
	for(int i=0; i<N-1;i++)
	for(int j=i+1;j<N;j++)
	if(a[i] > a[j]){
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
int max(int b[], int n){
	int max = b[0];
	for(int i = 1; i < n; i++)
	if(max < b[i])
	max = b[i];
	return max;
}

int min(int b[], int n){
	int min = b[0];
	for(int i = 1; i <n; i++)
	if(min > b[i])
	min = b[i];
	return min;
}

int main(){
	int b[20], N;
	printf("So phan tu thuc te cua mang N= ");
	scanf("%d", &N);
	Nhap(b,N);
	printf("Mang vua nhap: ");
	InMang(b,N);
	SapXep(b,N);
	printf("Mang sau khi duoc sap xep: ");
	InMang(b, N);
	printf("\nMax = %d", max(b, N));
	printf("\nMin = %d", min(b, N));
	getch();
	return 0;
}

