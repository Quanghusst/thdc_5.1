#include<stdio.h>// khai bao thu vien 
#include<string.h>// khai bao thu vien 

void xoa(char a[], int vt){// ham xoa ky tu o vi tri cho truoc
	int n = strlen(a);// gan strlen cho a
	for(int i = vt +1; i < n; i++){// duyet cac ky tu trong a tu vi tri can xoa +1
		a[i-1] = a[i];// gan ky tu can xoa +1 cho ki tu can xoa
	}
	a[n-1] = '\0';// gan ky tu ket thuc cho a[n-1]
}
void xoaKhoangTrang(char a[]){// ham xoa khoang trang
	for(int i = 0; i < strlen(a); i++){// duyet tat ca cac ky tu co trong xau a
		if(a[i] == ' ' && a[i + 1] == ' '){// neu hai ky tu lien nhau bang khoang trang
			xoa(a, i);// dung ham xoa
			i--;// giam i di mot don vi de kiem tra lai
		}  
	}
}
int main (){// bat dau ham main 
	char str[1000];// khai bao xau str
	gets(str);// nhap xau str
	do{// vong lap do while
		if(str[0] == ' '){// neu ky tu dau tien bang khoang trang 
			xoa(str, 0);// dung ham xoa tai vi tri 0;
		}
	}while(str[0] == ' ');// neu vi tri dau tien bang khoang trang thi  tiep  tuc lap 

	xoaKhoangTrang(str);	// dung ham xoa khoang trang 
	puts(str);// in ra str 
	 return 0;// tra ve gia tri 0 khi ket thuc xau
}
