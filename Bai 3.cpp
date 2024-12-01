#include<stdio.h>
int main(){
	int value,position,size;
	int arr[100];
	printf("Vui long nhap so phan tu(toi da 100):");
	scanf("%d",&size);
	if(size<0||size>100){
		printf("So phan tu ko hop le!\n");
		return 1;
	}
	printf("Vui long nhap tung phan tu vao mang:\n");
	for(int i=0;i<size;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("Vui long nhap vi tri muon xoa: ");
	scanf("%d",&position);
	if (position < 1 || position > size + 1) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }
	for(int i=position-1;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
	printf("Mang moi la:");
	for(int i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
	return 0;
}
