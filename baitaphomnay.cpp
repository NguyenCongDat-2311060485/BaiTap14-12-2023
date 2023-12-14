#include <stdio.h>
#include <math.h>
int n;
int a[100], b[100];
int x;
int i, j, k;
int max;
int min;

int SapXep(int n){
	int t;
	for(int i=1; i<n;i++)
	for(int j=i+1;j<n+1;j++)
	if(b[i] > b[j]){
		t = b[i];
		b[i] = b[j];
		b[j] = t;
	}
}

int main(){

printf("Nhap so phan tu cua mang: ");
scanf("%d", &n);

for (i = 1; i < n + 1; i++) {
    printf("Nhap phan tu a[%d]: ", i);
    scanf("%d", &a[i]);
    b[i] = a[i];
}

printf("\nMang vua nhap la : ");
for (i = 1; i < n + 1; i++) {
    printf("%d ", a[i]);
}

int tongchan = 0;
int tongle = 0;
for (i = 1; i < n + 1; i++) {
    if (a[i] % 2 == 1) {
        tongle += a[i];
    } else {
        tongchan += a[i];
    }
}

printf("\nTong cac so le la: %d\n", tongle);
printf("\nTong cac so chan la: %d\n", tongchan);

int index = -1;
printf("Nhap x = "); scanf("%d", &x);
for (i = 1; i < n + 1; i++) {
    if (a[i] == x) {
        index = i;
        break;
    }
}

if (index == -1) {
    printf("\nKhong co phan tu nao co gia tri = x\n");
} else {
    printf("\nVi tri cua phan tu dau tien bang x la %d\n", index);
}

int is_prime = 1;
printf("Cac so nguyen to trong mang la : ");
for (i = 1; i < n + 1; i++) {
    is_prime = 1;
    for (j = 2; j * j <= a[i]; j++) {
        if (a[i] % j == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) {
        printf("%d ", a[i]);
    }
}
printf("\nSo hoan hao trong mang la: ");
for (i = 1; i < n + 1; i++) {
    int sum = 0;
    for (j = 1; j <= a[i] / 2; j++) {
        if (a[i] % j == 0) {
            sum += j;
        }
    }
    if (sum == a[i]) {
        printf("%d ", a[i]);
    }
}
SapXep(n);
printf("\nMax = %d", b[n]);
printf("\nMin = %d", b[1]);
printf("\nMax thu 2 = %d", b[n - 1]);
printf("\nMin thu 2 = %d", b[2]);
int g, h, sum = 0;
	do{
    printf("\nNhap hai so nguyen g, h dieu kien (h>g): ");
    scanf("%d%d", &g, &h);
	}while(h < g);
    for (i = 1; i < (h-g+2); i++) {
    	if(i <= h and i >= g) sum += a[i];
    }

    printf("Tong cac so trong doan [g, h] la: %d\n", sum);
    printf("Nhap k = "); scanf("%d", &k);
	int phantucanchen = 999, trunggian;
	printf("\nMang sau khi chen them phan tu %d tai vi tri %d la : ", phantucanchen, k);
	for (int i = n + 1; i >= k; i--) {
    	a[i + 1] = a[i];
  	}
  	a[k] = phantucanchen;
  	for(i = 1; i < n + 2; i++){
		printf("%d ", a[i]);
	}
  	for (int i = k; i < n + 1; i++) {
        a[i] = a[i + 1];
    }
    printf("\nMang sau khi xoa phan tu o vi tri %d la: : ", k);
    for (int i = 1; i < n + 1; i++) {
        printf("%d ", a[i]);
    }

}

