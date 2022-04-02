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
			cout << "输入nCount：" << endl;
			int nCount = 0;
			cin >> nCount;
			UI.UI_Clean();
			cout << "当前的延时长度为：" << Stm32F103RC.Delay(nCount) << " 毫秒" << endl;
			UI.UI_Pause();
		}break;
		case 2:
		{
			cout << "输入时钟主频：" << endl;
			int NewMhz = 0;
			cin >> NewMhz;
			Stm32F103RC.WriteMhz(NewMhz);
		}break;
		case 3: {UI.UI_ReadMe(); }break;
		}
	}

	return 0;
}
