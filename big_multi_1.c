/* 
���������������
http://zhidao.baidu.com/question/326369234.html?fr=fd

��Ϊ�����н�������������������������ǳ���Ȼ����ô����� 
*/
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void multiply(char* a,char* b,char* c)
{
    int i,j,ca,cb,t, * s;
    ca=strlen(a);		//a��λ��Ϊca 
    cb=strlen(b);		//b��λ��Ϊcb 
    s=(int*)malloc(sizeof(int)*(ca+cb));	//s����ռ�Ϊint�͵�(ca+cb)�� ����s[]Ϊint���飬����Ϊca+cb�� 
	//��ʼ��s���� 
    for (i=0;i<ca+cb;i++)
        s[i]=0;

    /*ģ�±�����̡�
	ֻ������Ĵ����ǴӸ�λ��ʼ��
	��Ϊ��c����������������ַ�����a[0]��b[0]Ϊ���λ 
    ����a[]="9876", b[]="54", 
	����һ���Ǵӵ�λ��ʼ�㣬������6*4��
	��c���������ȴ�a[0] ,b[0]��ʼ ��������9*5�� 
	��������������Ҫע��������⡣ 
	*/
	for (i=0;i<ca;i++)
        for (j=0;j<cb;j++)
        { 
		    s[i+j+1]+=(a[i]-'0')*(b[j]-'0');
         	
         	//woo
         	if(j==0)
         	{
         		printf("\n");
         		for(t=0; t<i; t++)
         			printf("    ");
			}
			printf("%4d", s[i+j+1]);    	
		}
    for (i=ca+cb-1;i>=0;i--)
        if (s[i]>=10)
        {
            s[i-1]+=s[i]/10;
            s[i]%=10;
        }
        
    
	//�ж����λ�Ƿ�Ϊ0    
    i=0;
    while (s[i]==0)
        i++;
        
	//������ת��Ϊ�ַ�
    for (j=0;i<ca+cb;i++,j++)
        c[j]=s[i]+'0';
    c[j]='\0';
    
    free(s);
}

int main(void)
{
	char a[]="123456789123456";
	char b[]="98765432154321";
	
	//char a[]="9876";
	//char b[]="54";
	
	char c[50];
	
	int i;
	for( i=0; i<50; i++)
		c[i] = 0;
		
	multiply(a, b, c);
	
	printf("\n\nResult is %s", c);
	
	getch();
}
