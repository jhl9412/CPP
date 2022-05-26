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
	
	// '\0' 중요성
	//char fruit[80] = "straw";
	//char fruit[80] = {'s','t','r','a','w'}; // => 초기화 '\0'으로 됨.
	//char fruit[80]; //=> 초기화 쓰레기값
	 
	// 리눅스 명령어 argc, argv 이용 예제
	//for (int i = 0; i < argc; i++)
	//{
	//	printf("argv[%d] Pointer: %p \n", i, argv[i]);
	//	printf("argv[%d] : %s\n", i, argv[i]);
	//}

	// 리눅스 명령어 while 이용
	int i = 0;
	
	//while (argv[i] != NULL) 
	//{
	//	printf("argv[%d] Pointer: %p \n", i, argv[i]);
	//	printf("argv[%d] : %s\n", i, argv[i]);
	//  i++;
	//}
	// 자세하게
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
	////printf("연결된 문자열 : %s\n", fruit);
	//printf("연결된 문자열 : %s\n", my_strcat(fruit, "berry"));

	// my_strcpy 
	char fruit[80] = "";
	my_strcpy(fruit, "strawberry");
	printf("연결된 문자열 : %s\n", fruit);
	return 0;
}

char* my_strcat(char* pd,const char* ps)
{
	// char* 반환에서 po 사용 이유 : printf 같은 함수에서 바로 사용하고 싶어서
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
