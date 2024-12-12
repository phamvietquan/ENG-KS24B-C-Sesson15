#include <stdio.h>
#include<string.h>
int main(){
    char str[]="ababcdef";
    int count[300]={0};
    for(int i=0; i<strlen(str); i++){
        count[str[i]]++;
    }
    printf("So lan xuat hien cua tung ky tu la: \n");
    for(int i=0;i<300;i++){
    	if(count[i]>0){
    		printf("%c: %d\n",i, count[i]);
		}
	}

    return 0;
}
