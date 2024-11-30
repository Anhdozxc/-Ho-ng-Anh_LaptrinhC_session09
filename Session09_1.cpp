#include<stdio.h>

 int main(){
	int a[100];
	int n;
	
	printf("Moi ban nhap vao so luong phan tu :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Moi ban nhap vao vi tri muon chen(0-%d) :",n+1);
	int pos;										
	scanf("%d",&pos);
	if(pos==0){
		pos=1;
	}
	if(pos<1||pos>n+1){
	printf("Khong the chen do vi tri chua hop le !");
	return 0;		
	}
	printf("Nhap gia tri cho phan tu muon chen :");
	int value;
	scanf("%d",&value);
	for (int i=n ;i>=pos ;i--) {
		a[i]=a[i-1];
	}
	a[pos-1]=value;
	n=n+1;
	printf("Mang sau khi them phan tu la :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}



