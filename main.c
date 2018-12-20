#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Question{
	int num;
	char qname[100];
	char q[100];
	char ans[100];
}Q[100];

int total;

void Read();
void Answer();
void Seitouritu();

int main()
{
	int a;
	
	while(a != 0){
		printf("---単語帳プログラム---\n\n");
		printf("問題登録 -> 1\n");
		printf("解答する -> 2\n");
		printf("逆引き -> 3\n");
		printf("終了 -> 0\n");
		printf("-> ");
		scanf("%d",&a);
		printf("\n");
		switch(a){
			case 1:
			
				break;
			case 2:
				Answer();
				break;
			case 3:
			
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
		fscanf(fi,"%s",Q[i].qname);
		fscanf(fi,"%s",Q[i].q);
		fscanf(fi,"%s",Q[i].ans);
		i++;
	}
	total = i - 1;
	fclose(fi);
}
	

