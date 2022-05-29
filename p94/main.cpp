#include <iostream>
#include <string>
using namespace std;

int main()
{

	char text[10000] = { '\0' };
	char alphabet[27];
	int textCnt = 0;
	int  jdx=0;
	// alphabet 배열을 생성 -> 아스키코드 이용 소문자 a~z 저장.
	for (int idx = 0; idx < 26; idx++)
	{
		alphabet[idx] = idx+97;
	}
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n" << "텍스트의 끝은 ; 입니다 10000개까지 가능합니다.\n";
	// 요소가 10000개인 text char형 배열에 최대 10000개까지 구분자는 ;
	cin.getline(text, 10000, ';');
	// A=65 , a=97
	
	while (text[jdx] != '\0')
	{
		// isalpha 함수로 알파벳 확인 맞으면 textCnt 증가로 전체 alphabet 개수를 셈.
		if (isalpha(text[jdx]))
		{
			text[jdx] = tolower(text[jdx]);
			// tolower 는 대문자를 소문자로 바꿔주면 반환형이 int 이므로 반환값으로 text 를 변경
			textCnt++;
		}
		jdx++;
	}

	for (int kdx = 0; kdx < 26; kdx++)		//알파벳 a~z까지 검사
	{
		int cnt = 0, idx=0;					//cnt 는 각각의 알파벳이 사용된 개수.
		while(text[idx]!='\0')
		{
			if (alphabet[kdx] == text[idx]) cnt++; // 알파벳이 text와 일치하면 cnt 증가.
			idx++;
		}
		cout << alphabet[kdx] << " (" << cnt << ")\t: ";  // cnt 출력.
		for (int idx = 0; idx < cnt; idx++) cout << "*";
		cout << endl;
	}
	
}
