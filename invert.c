/*
��ת�ַ�����˳��
���룺a[] = "abcdefg"
�����a[] = "gfedcba"
ǿ����������Ȼ��a[]�У�������ܻ�ܳ��ܳ��� 
*/

#include <stdio.h>
#include <string.h>
void swap(char *x, char * y)
{
	char tmp;
	
	tmp = *x;
	*x = *y;
	*y = tmp;	
}
void invert(char a[], char len) 
{
	int i ;
	char tmp;
	for(i=0; i<len/2; i++)
	{
		swap(&a[i], &a[len-1-i]);
	}
}

int main(void)
{
	char a[] = "abcdefgh";
	char len;

	len = strlen(a);
	
	printf("���룺%s\n", a);
	invert(a, len);
	printf("len = %d\n", len);
	printf("�����%s\n", a);
	
	getch();
}
