#include<stdio.h>
int main(){
	int value,position,size,n;
	int arr[100];
	do{
		printf("-----------------MENU-------------\n");
	printf("  1.Nhap vao mang\n");
	printf("  2.Hien thi mang\n");
	printf("  3.Them vao mang\n");
	printf("  4.Sua phan tu\n");
	printf("  5.xoa phan tu\n");
	printf("  6.Thoat\n");
		printf("Vui long lua chon chuong trinh:");
    	scanf("%d",&n);
    	printf("Ban da lua chon %d\n",n);
 	    switch(n){
		    case 1:
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
	            break;
		    
	        
	        case 2:
		       	for(int i=0;i<size;i++){
		            printf(" %d",arr[i]);
	            }
              	printf("\n");
			    break;
			
			case 3:
			    printf("Vui long nhap phan tu muon them: ");
	            scanf("%d",&value);
        	    printf("Vui long nhap vi tri muon them: ");
        	    scanf("%d",&position);
        	    if (position < 1 || position > size + 1) {
                    printf("Vi tri khong hop le.\n");
                    return 1;
                }
        	    for(int i=size;i>=position;i--){
      	            arr[i]=arr[i-1];
        	    }
        	    arr[position-1]=value;
        	    size++;    
         	    break;
        	
        	case 4:
        	    printf("Vui long nhap phan tu muon sua: ");
        	    scanf("%d",&value);
        	    printf("Vui long nhap vi tri muon sua: ");
        	    scanf("%d",&position);
        	    if (position < 1 || position > size + 1) {
                    printf("Vi tri khong hop le.\n");
                    return 1;
                }
                arr[position-1]=value;
                break;
            
            case 5:
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
	            break;
	            
	        case 6:
	        	printf("GOOD BYE!");
	        	n==6;
	        	break;
    }
	printf("\n");
	}while(n!=6);
	return 0;
}
