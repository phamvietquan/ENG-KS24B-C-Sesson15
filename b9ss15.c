#include <stdio.h>
#include <string.h>
int main(){
	char str[100]="hello world, o";
	printf("%s",str);
	char n;
	printf("\nMoi ban nhap vao ky tu muon xoa: ");
	scanf("%c", &n);
	char str2[100];
	int j=0;
	for(int i=0;i<strlen(str);i++){
		if(n!=str[i]){
			str2[j]=str[i];
			j++;
		}
	}
	strcpy(str,str2);
	printf("%s",str1);
	return 0;
}
