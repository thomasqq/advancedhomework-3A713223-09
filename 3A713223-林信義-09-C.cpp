#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int month,day,S;
	
    printf("�п�J�@�Ӥ��������Τ��:",month,day);
    scanf("%d,%d",&month,&day);
	S=(month*2+day)%3;
	
	printf("�z���B�լ�");
	if(S==0){
		printf("���q\n"); 
	}
	else if(S==1){
		printf("�N\n"); 
	}
	else if(S==2){
		printf("�j�N\n"); 
	}
	
	system("PAUSE");
	return 0;
}
