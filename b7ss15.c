#include <stdio.h>
#include <string.h>
int main() {
	char test[]="wifjnnsifniejv";
	int countCharacText=0;
	int countCharacNum=0;
	int countCharacSpecial=0;
	int length=strlen(test);
	for(int i=0;i<length;i++){
		if(isalpha(test[i])){
			countCharacText++;
		}else if(isdigit(test[i])){
			countCharacNum++;
		}else{
			countCharacSpecial++;
		}
	}
	printf("%d ki tu chu cai \n", countCharacText);
	printf("%d ki tu so \n", countCharacNum);
	printf("%d ki tu dac biet \n", countCharacSpecial);

    return 0;
}
