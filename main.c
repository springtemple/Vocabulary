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
	
void Answer(){
	int i,j;
	int a;
	int count,maru;
	float par;
	char ans[100];
	
	struct Bad{
		char q[100];
		char bans[100];
		char ans[100];
	}bad[100];
	
	a = 0;
	count = 0;
	maru = 0;
	
	Read();
	
	do{
		printf("問題数：%d問\n\n");
		printf("始める -> 1\n");
		printf("設定 -> 0\n");
		scanf("%d",&x");
		switch(x){
			case 1:
				for(i=0;i<total;i++){
					count++;
					printf("問題：%s\n",Q[i].q);
					printf("答え：");
					scanf("%s",ans);
					a = strcmp(ans,Q[i].ans);
					if(a == 0){
						printf("○\n");
						maru++;
					}else{
						printf("×\n");
						strcpy(bad[j].q,Q[i].q);
						strcpy(bad[j].bans,ans);
						strcpy(bad[j].ans,Q[i].ans);
						printf("正解：%s\n",Q[i].ans);
						j++;
					}
				}
				printf("回答終了\n\n");
				Seitouritsu();
				
			case 0:
				Config();
				break;
		}
	}while(x != 1);
}

void Seitouritu()

void ConfigRead(){
	*fw;
	
	fi = fopen("config.txt","r");
	fscanf("%d",&rondom);
	fscanf("%d",&bad);
	fclose(fi);
}

void Config(){
	int rondom,bad,a;
	FILE *fi,
	printf("---設定---\n");
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
	printf("出題順の変更 -> 1\n");
	printf("間違った問題の設定 -> 2\n");
	scanf("%d",&a);
	case(a){
		case 1:
			printf("順番に出題する -> 1\n");
			printf("ランダムに出題する -> 2\n");
			break;
		case 2:
			printf("間違った問題を最後にすべて出力する -> 0\n");
			printf("解けるまで解き直す-> 1\n");
			break;
	}
}
	

