#include<stdio.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
int f=0;
char re;
void draw(){
	printf("\n\n\t\t\t X O X  GAME ");
	printf("\n\n\t\t\t|---|---|---|\n");
		printf("\t\t\t|  %c|  %c| %c |\n",a[0],a[1],a[2]);
	printf("\t\t\t|---|---|---|\n");
	printf("\t\t\t|  %c|  %c| %c |\n",a[3],a[4],a[5]);
printf("\t\t\t|---|---|---|\n");
	printf("\t\t\t|  %c|  %c| %c |\n",a[6],a[7],a[8]);
printf("\t\t\t|---|---|---|\n");
}
int main(){
	draw();
	return(0);
}
