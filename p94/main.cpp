#include <iostream>
#include <string>
using namespace std;

int main()
{

	char text[10000] = { '\0' };
	char alphabet[27];
	int textCnt = 0;
	int  jdx=0;
	// alphabet �迭�� ���� -> �ƽ�Ű�ڵ� �̿� �ҹ��� a~z ����.
	for (int idx = 0; idx < 26; idx++)
	{
		alphabet[idx] = idx+97;
	}
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n" << "�ؽ�Ʈ�� ���� ; �Դϴ� 10000������ �����մϴ�.\n";
	// ��Ұ� 10000���� text char�� �迭�� �ִ� 10000������ �����ڴ� ;
	cin.getline(text, 10000, ';');
	// A=65 , a=97
	
	while (text[jdx] != '\0')
	{
		// isalpha �Լ��� ���ĺ� Ȯ�� ������ textCnt ������ ��ü alphabet ������ ��.
		if (isalpha(text[jdx]))
		{
			text[jdx] = tolower(text[jdx]);
			// tolower �� �빮�ڸ� �ҹ��ڷ� �ٲ��ָ� ��ȯ���� int �̹Ƿ� ��ȯ������ text �� ����
			textCnt++;
		}
		jdx++;
	}

	for (int kdx = 0; kdx < 26; kdx++)		//���ĺ� a~z���� �˻�
	{
		int cnt = 0, idx=0;					//cnt �� ������ ���ĺ��� ���� ����.
		while(text[idx]!='\0')
		{
			if (alphabet[kdx] == text[idx]) cnt++; // ���ĺ��� text�� ��ġ�ϸ� cnt ����.
			idx++;
		}
		cout << alphabet[kdx] << " (" << cnt << ")\t: ";  // cnt ���.
		for (int idx = 0; idx < cnt; idx++) cout << "*";
		cout << endl;
	}
	
}
