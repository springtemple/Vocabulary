void Seitouritu(){
	par = ((float)maru/count) * 100;
	printf("正答率 : %4.1f[%]  ",par);
	if(count != maru){
		printf("%d問不正解です\n\n",bad);
		printf("間違った問題を表示します\n\n");
		for(j=0;j<count-maru;j++){
			printf("%d番 : %s\n",B[j].bnum,B[j].bq);
			printf("あなたの回答 : %s\n",B[j].bans);
			printf("正解 : %s\n",B[j].aans);
		}
	}
	else printf("全問正解です\n\n");

return;
}
