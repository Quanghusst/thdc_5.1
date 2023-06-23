#include<stdio.h>
#include<string.h>
void xoa(char a[], int vt){
	int n = strlen(a);
	for(int i = vt +1; i < n; i++){
		a[i-1] = a[i];
	}
	a[n-1] = '\0';
}
void xoaKhoangTrang(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == ' '){
			xoa(a, i);
			i--;
		}  
	}
}
void xoaTrungLap(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == a[i+1]){
			xoa(a, i);
			i--;
		}  
	}
}
void sapXepTheoAscii(char a[]){
	
	for(int i = 0; i < strlen(a)-1; i++){
		for(int j = i+1; j < strlen(a); j++){
			if(a[i]>a[j]){
				char tam;
				tam = a[i];
				a[i] =a[j];
				a[j]= tam;
			}
		}
	}
}
void ghep2Xau(char ghep[], char a[], char b[]){
	
	strcat(ghep, a);
	strcat(ghep, b);
}
void Tan_Suat_Xuat_Hien(char s[]){

	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		bool KT = true; 
		for (int j = i - 1; j >= 0; j--)
		{
			if (s[i] == s[j])
			{
				KT = false;
				break;
			}
		}
		if (KT == true)
		{
	
			int dem = 0;
			for (int k = 0; k < n; k++)
			{
				if (s[i] == s[k])
				{
					dem++;
				}
			}
		
			printf("%d\n", dem);
		}
	}
}

int main (){
	char s[30], t[30], ghep[30]="\0", ghepcpy[30]="\0";
	gets(s); gets(t);
	ghep2Xau(ghep, s, t);
	sapXepTheoAscii(ghep); strcpy(ghepcpy,ghep);
	xoaKhoangTrang(ghep);
	xoaTrungLap(ghep);
	puts(ghep);
	Tan_Suat_Xuat_Hien(ghepcpy);

	return 0;
}
