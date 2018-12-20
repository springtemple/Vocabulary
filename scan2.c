#include<stdio.h>
#include<string.h>

int main(){
	FILE *fi;
	int i = 0;
	char word[3000];
	fi = fopen("tango","a");
	if(fi==NULL){

	        printf("ファイルオープンエラー");

	        return -1; //ファイルを開けなかった場合の対策として終了させる

	}

	
	while((strcmp(word,"0"))!=0){
		printf("日本語訳を入力してください\n");
	        scanf("%s",word);            // 文字列の入力

	        fprintf(fi,"%s\n",word);            //fiに入力文字を格納しファイルに出力

		printf("英単語を入力してください\n");
	        scanf("%s",word);            // 文字列の入力
	        fprintf(fi,"%s\n",word);            //fiに入力文字を格納しファイルに出力

	}	
	

    fclose(fi);//ファイルを閉じる

	    return 0;

	}
