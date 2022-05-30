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
	// 구조체 복습
	//Student st[2] = { {1, "ABC", 85.0},{2, "DEF", 92.3} };

	//for (int idx = 0; idx < 2; idx++)
	//{
	//	printf("%2d %s %.1lf\n", st[idx].number, st[idx].name, st[idx].score);
	//}
	//int size = sizeof(st) / sizeof(st[0]);
	//input_st(st);
	//print_st(size,st);
// stream 입출력 함수로 파일 생성, 데이터 저장
	//save_st(st);

// file을 읽어서 구조체 변수 집어넣기
	Student* st;
	FILE* rfp;
	rfp = fopen("st.db", "r");
	if (!rfp) {
		fputs("st.db not open. \n", stdout);
		return 1;
	}
	
	fseek(rfp, 0, SEEK_END); // SEEK_END 파일 끝으로 이동. SEEK_SET 파일 처음으로 이동.
	int size = ftell(rfp); // 현재 위치를 반환.
	int count = size / sizeof(Student);
	printf(" %d %d \n", size, count);
	st = (Student*)malloc(count * sizeof(Student)); //동적 메모리 할당.
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

void save_st(Student* student)
{
	FILE* wfp;
	// 고급 입출력 함수 
	// fopen(filename,option);
	wfp = fopen("st.db", "w");
	if (wfp == NULL) //=>NULL이면 오류, 예외처리
	{
		fputs("st.db 파일을 열 수 없습니다.\n",stdout);
		exit(1); // exit => stdlib.h 필요
	}
	// fwrite -> 버퍼, 사이즈, 저장 공간
	fwrite(student, sizeof(Student),2, wfp);

}
void read_st(Student* student, int count, FILE* rfp)
{
	// 큰 의미는 없을 듯
	fread(student, sizeof(Student), count, rfp);
}
