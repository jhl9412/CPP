#include <stdio.h>	

char* my_strcat(char* ,const char* );
char* my_strcpy(char* pd, const char* ps);
int main(int argc, char* argv[])
{
	int num0 = 0;
	int num1 = 1;
	int num2 = 2;
	//int* np = &num2 + 3;
	//printf("test : %d\n", *(&num2));
	//printf("test : %d\n", *np);
	
	// '\0' �߿伺
	//char fruit[80] = "straw";
	//char fruit[80] = {'s','t','r','a','w'}; // => �ʱ�ȭ '\0'���� ��.
	//char fruit[80]; //=> �ʱ�ȭ �����Ⱚ
	 
	// ������ ��ɾ� argc, argv �̿� ����
	//for (int i = 0; i < argc; i++)
	//{
	//	printf("argv[%d] Pointer: %p \n", i, argv[i]);
	//	printf("argv[%d] : %s\n", i, argv[i]);
	//}

	// ������ ��ɾ� while �̿�
	int i = 0;
	
	//while (argv[i] != NULL) 
	//{
	//	printf("argv[%d] Pointer: %p \n", i, argv[i]);
	//	printf("argv[%d] : %s\n", i, argv[i]);
	//  i++;
	//}
	// �ڼ��ϰ�
	while (1)
	{
		if (argv[i] != NULL)
		{
			printf("argv[%d] : %s\n", i, argv[i]);
			i++;
		}
		else 
			break;
	}
	//my_strcat(fruit, "berry");
	////printf("����� ���ڿ� : %s\n", fruit);
	//printf("����� ���ڿ� : %s\n", my_strcat(fruit, "berry"));

	// my_strcpy 
	char fruit[80] = "";
	my_strcpy(fruit, "strawberry");
	printf("����� ���ڿ� : %s\n", fruit);
	return 0;
}

char* my_strcat(char* pd,const char* ps)
{
	// char* ��ȯ���� po ��� ���� : printf ���� �Լ����� �ٷ� ����ϰ� �;
	//char* po = pd;
	static char temp[20] = "hello";
	while (*pd != '\0') pd++;
	while (*ps != '\0')
	{
		*(pd++) = *(ps++);
	}
	*pd = '\0';

	//return po;
	return temp;
}

char* my_strcpy(char* pd, const char* ps)
{
	char* po = pd;
	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}
