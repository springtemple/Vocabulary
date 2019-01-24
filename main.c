#include<stdio.h>
#include<string.h>

void Uproad(){
	FILE *fi;
	FILE *fil;
	int i = 0;
	char Jp[3000],En[3000];
	char jn[300];
	char name;

	printf("登録済みのファイル\n");
	fil = fopen("file","a+");
	while((name = fgetc(fil))!=EOF){
		printf("%c",name);
	}
	fclose(fil);

	fil = fopen("file","a");
	printf("ファイルを指定してください（新規の場合もそのまま入力）\n");
	scanf("%s",jn);
	fprintf(fil,"%s\n",jn);
	fclose(fil);

	fi = fopen(jn,"a");	
	while(1){
		printf("%d単語目\n",i+1);
		printf("日本語訳を入力してください(『end』入力で終了)\n");
	        scanf("%s",Jp);            // 文字列の入力
		if(strcmp(Jp,"end")==0)
			break;

		printf("英単語を入力してください\n");
		scanf("%s",En);            // 文字列の入力

	        fprintf(fi,"%s\n",Jp);            //fiに入力文字を格納しファイルに出力
	        fprintf(fi,"%s\n",En);            //fiに入力文字を格納しファイルに出力

		i++;
	}	
	

    fclose(fi);//ファイルを閉じる

}
