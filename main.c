#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Question{
	int num;
	char q[100];
	char ans[100];
}Q[100];

int total;		//問題数
int rondom;		//出題順
int bad;		//不正解の処理

void Read();
void Config();
void ConfigRead();

int main()
{
	int a;
	
	printf("単語帳プログラム\n\n");
	
	while(a != 0){
		printf("---初期画面---\n\n");
		printf("問題登録 -> 1\n");
		printf("解答する -> 2\n");
		printf("辞書 -> 3\n");
		printf("設定 -> 4\n");
		printf("終了 -> 0\n");
		printf("-> ");
		scanf("%d",&a);
		printf("\n");
		switch(a){
			case 1:
				
				break;
			case 2:
			
				break;
			case 3:
				
				break;
			case 4:
				Config();
				break;
			case 0:
				printf("終了します。お疲れ様でした。\n");
				break;
			default:
				printf("違う数字が入力されました。\n");
				printf("もう一度入力しなおしてください。\n");
				break;
		}
	}
	return 0;
}

void Read(){
	int i;
	char filename[100];
	FILE *fi;
	
	printf("読み込むジャンルを選択してください\n");
	printf("-> ");
	scanf("%s",filename);
	fi = fopen(filename,"r");
	i = 0;
	while(feof(fi) == 0){
		fscanf(fi,"%s",Q[i].q);
		fscanf(fi,"%s",Q[i].ans);
		i++;
	}
	total = i - 1;
	fclose(fi);
}

void ConfigRead(){
	FILE *fi;
	
	fi = fopen("config.txt","r");
	fscanf(fi,"%d",&rondom);
	fscanf(fi,"%d",&bad);
	fclose(fi);
	
	printf("---設定---\n\n");
	printf("現在の設定\n");
	printf("出題順：");
	switch(rondom){
		case 0:
			printf("順番に出題する\n");
			break;
		case 1:
			printf("ランダムに出題する\n");
			break;
	}
	printf("間違った問題を");
	switch(bad){
		case 0:
			printf("最後にすべて出力する\n");
			break;
		case 1:
			printf("解けるまで解き直す\n");
			break;
	}
	printf("\n");
}	

void Config(){
	int a;
	FILE *fw;
	
	ConfigRead();
	do{
		printf("出題順の変更 -> 1\n");
		printf("間違った問題の設定 -> 2\n");
		printf("終了する -> 0\n");
		printf("-> ");
		scanf("%d",&a);
		fw = fopen("config.txt","w");
		switch(a){
			case 1:
				printf("順番に出題する -> 0\n");
				printf("ランダムに出題する -> 1\n");
				printf("-> ");
				scanf("%d",&rondom);
				printf("変更しました\n");
				break;
			case 2:
				printf("間違った問題を最後にすべて出力する -> 0\n");
				printf("解けるまで解き直す-> 1\n");
				printf("-> ");
				scanf("%d",&bad);
				printf("変更しました\n");
				break;
			case 0:
				break;
			default:
				printf("違う文字が入力されました。\n");
				printf("もう一度入力しなおしてください\n");
				break;
		}
		fprintf(fw,"%d\n%d",rondom,bad);
		fclose(fw);
	}while(a != 0);
	printf("\n");
}
	

