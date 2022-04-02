#include <iostream>
#include "stm32.h"
#include "UI.h"

using namespace std;

Stm32 Stm32F103RC;
Stm32_UI UI;

int main()
{
	int Choice = 0;
	while (1)
	{
		UI.UI_Clean();
		UI.UI_Choice();
		cin >> Choice;
		UI.UI_Clean();
		switch (Choice)
		{
		case 1:
		{
			cout << "����nCount��" << endl;
			int nCount = 0;
			cin >> nCount;
			UI.UI_Clean();
			cout << "��ǰ����ʱ����Ϊ��" << Stm32F103RC.Delay(nCount) << " ����" << endl;
			UI.UI_Pause();
		}break;
		case 2:
		{
			cout << "����ʱ����Ƶ��" << endl;
			int NewMhz = 0;
			cin >> NewMhz;
			Stm32F103RC.WriteMhz(NewMhz);
		}break;
		case 3: {UI.UI_ReadMe(); }break;
		}
	}

	return 0;
}
