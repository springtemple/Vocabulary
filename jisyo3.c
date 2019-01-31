#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define GMax 100

int main()
{
	FILE *tango;
	char Lines[100][100];
	char str[100][100],str2[100];
	int i,j,k,l;

	tango = fopen("tango.txt","r");
	printf("文字を入力してください。\n");
	printf("終了する場合は「*」を入力してください。\n");
	for(l=0;;l++){
		j=0;
		scanf("%s",str[l]);
		if(str[l][0]=='*'){
			printf("終了します。\n");
			break;
		}
		k=strlen(str[l]);
		for(i=0;i<GMax && fgets(Lines[i],100,tango)!=NULL;i++);
		printf("\n\n検索結果\n----------------\n\n");
		for(i=0;i<GMax;i++){
			if(strncmp(Lines[i],str[l],k)==0){
				printf("%s",Lines[i]);
			}else j++;
		}
		if(j==GMax) printf("%sに一致する情報は見つかりませんでした。\n",str[l]);
		printf("\n----------------\n");
	}
	fclose(tango);
	printf("\n");

	return 0;
}

