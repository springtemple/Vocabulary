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
				printf("\x1b[31m");	//圓福モジュール（赤）
				
				printf("\x1b[0m");
				break;
			case 2:
				printf("\x1b[33m");	//梶田モジュール（黄）
				
				printf("\x1b[0m");	
				break;
			case 3:
				printf("\x1b[35m");	//花谷モジュール（マゼンタ）
				
				printf("\x1b[0m");
				break;
			case 4:
				printf("\x1b[36m");	//木村モジュール（シアン）
				Config();
				printf("\x1b[0m");
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
