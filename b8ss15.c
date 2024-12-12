#include <stdio.h>

int main(){
	char fullName[]="quan";
	int length=strlen(fullName);
	for(int i=0;i<length;i++){
		if(i==0 || fullName[i-1]==' '){
			if(fullName[i]>='a'&&fullName[i]<='z'){
				fullName[i]=toupper(fullName[i]);
			}
		}
	}
	printf("%s", fullName);
  return 0;
}
