#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){

	FILE* pf = fopen("wenben.txt","r");
	int i=0;
	int j=0;
	if(pf!=NULL){
		int ch =fgetc(pf);
		if(ch!=EOF){
			i=1;
		}
		while(ch!=EOF){
			j++;
			if(ch==','||ch==' ')
			i++;
			ch = fgetc(pf);
		}
	}
	fclose(pf);
	if(*argv[1]=='c')
	printf("�ַ���%d��",j);
	else if(*argv[1]=='w')
	printf("������%d��",i);
	return 0;
}







