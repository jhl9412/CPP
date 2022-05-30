#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
	int number;
	char name[10];
	double score;
}Student;

void print_st(int size, Student* student);
void input_st(Student* student);
void save_st(Student* student);
void read_st(Student* student,int count, FILE* rfp);

int main()
{
	// ����ü ����
	//Student st[2] = { {1, "ABC", 85.0},{2, "DEF", 92.3} };

	//for (int idx = 0; idx < 2; idx++)
	//{
	//	printf("%2d %s %.1lf\n", st[idx].number, st[idx].name, st[idx].score);
	//}
	//int size = sizeof(st) / sizeof(st[0]);
	//input_st(st);
	//print_st(size,st);
// stream ����� �Լ��� ���� ����, ������ ����
	//save_st(st);

// file�� �о ����ü ���� ����ֱ�
	Student* st;
	FILE* rfp;
	rfp = fopen("st.db", "r");
	if (!rfp) {
		fputs("st.db not open. \n", stdout);
		return 1;
	}
	
	fseek(rfp, 0, SEEK_END); // SEEK_END ���� ������ �̵�. SEEK_SET ���� ó������ �̵�.
	int size = ftell(rfp); // ���� ��ġ�� ��ȯ.
	int count = size / sizeof(Student);
	printf(" %d %d \n", size, count);
	st = (Student*)malloc(count * sizeof(Student)); //���� �޸� �Ҵ�.
	fseek(rfp, 0, SEEK_SET);
	fread(st, sizeof(Student), count, rfp);
	//read_st(st, count, rfp);
	
	//int size = sizeof(st) / sizeof(st[0]);
	print_st(count, st);
	free(st);
	return 0;
}

void input_st(Student* student)
{
	strcpy(student[0].name, "abc");
	strcpy(student[1].name, "def");
}

void print_st(int size, Student* student)
{
	
	// �Ű������� student�� ������ ������ ��������� �����ּҸ� �޾ƿ��� ������ size = 4, 
	// student�� student �迭�� ù ��° ���ڸ� �ǹ��ϱ� ������ size = 24�̴�.
	//int size = sizeof(*student) / sizeof(student[0]);

	for (int idx = 0; idx < size; idx++)
	{	
		//printf("%2d %s %.1lf\n", student[idx].number, student[idx].name, student[idx].score);
		//printf("%2d %s %.1lf\n", (*student).number, (*student).name, (*student).score);
		printf("%2d %s %.1lf\n", student->number, student->name, student->score);
		student++;
	}
}

void save_st(Student* student)
{
	FILE* wfp;
	// ��� ����� �Լ� 
	// fopen(filename,option);
	wfp = fopen("st.db", "w");
	if (wfp == NULL) //=>NULL�̸� ����, ����ó��
	{
		fputs("st.db ������ �� �� �����ϴ�.\n",stdout);
		exit(1); // exit => stdlib.h �ʿ�
	}
	// fwrite -> ����, ������, ���� ����
	fwrite(student, sizeof(Student),2, wfp);

}
void read_st(Student* student, int count, FILE* rfp)
{
	// ū �ǹ̴� ���� ��
	fread(student, sizeof(Student), count, rfp);
}
