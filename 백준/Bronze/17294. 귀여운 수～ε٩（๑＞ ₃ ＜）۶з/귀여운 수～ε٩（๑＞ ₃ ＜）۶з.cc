#include <stdio.h>

int main(){
	char str[10001];
	int d=0;
	scanf("%s",str);
	d=str[0]-str[1];
	for(int i=1; str[i+1]!='\0'; i++){
		if(str[i]-str[i+1]!=d){
			printf("흥칫뿡!! <(￣ ﹌ ￣)>");
			return 0;
		}
	}
	printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
}