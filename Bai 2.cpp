#include<stdio.h>
int main(){
	int n,size,value,position;
	int arr[100];
	printf("Vui long nhap so phan tu:");
	scanf("%d",&size);
	printf("Vui long nhap tung phan tu vao mang:\n");
	for(int i=0;i<size;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("Vui long nhap phan tu muon sua: ");
	scanf("%d",&value);
	printf("Vui long nhap vi tri muon sua: ");
	scanf("%d",&position);
	if (position < 1 || position > size + 1) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }
    arr[position-1]=value;
	printf("Mang moi la:");
	for(int i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
	return 0;
}
