#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y,m,d,s;
	printf("��J���: ");
	scanf("%d%d",&m,&d);
	s=(m*2+d)%3;
	if(s==0)
	printf("���q\n");
	else if(s==1)
	printf("�N\n");
	else 
	printf("�j�N\n");
	system("pause");
	return 0 ;
	
}
	
