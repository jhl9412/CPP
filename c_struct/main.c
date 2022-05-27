#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student {
	int number;
	char name[10];
	double score;
}Student;

void print_st(int size, Student* student);
void input_st(Student* student);

int main()
{
	Student st[2] = { {1, "ABC", 85.0},{2, "DEF", 92.3} };

	//for (int idx = 0; idx < 2; idx++)
	//{
	//	printf("%2d %s %.1lf\n", st[idx].number, st[idx].name, st[idx].score);
	//}
	int size = sizeof(st) / sizeof(st[0]);
	input_st(st);
	print_st(size,st);
	return 0;
}

void input_st(Student* student)
{
	strcpy(student[0].name, "abc");
	strcpy(student[1].name, "def");
}

void print_st(int size, Student* student)
{
	
	// 매개변수의 student는 포인터 변수라 저장공간에 시작주소를 받아오기 때문에 size = 4, 
	// student는 student 배열의 첫 번째 인자를 의미하기 때문에 size = 24이다.
	//int size = sizeof(*student) / sizeof(student[0]);

	for (int idx = 0; idx < size; idx++)
	{	
		//printf("%2d %s %.1lf\n", student[idx].number, student[idx].name, student[idx].score);
		//printf("%2d %s %.1lf\n", (*student).number, (*student).name, (*student).score);
		printf("%2d %s %.1lf\n", student->number, student->name, student->score);
		student++;
	}
}