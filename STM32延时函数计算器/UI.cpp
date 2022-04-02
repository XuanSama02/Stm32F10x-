#include <iostream>
#include <Windows.h>
#include "stm32.h"
#include "UI.h"

using namespace std;

extern Stm32 Stm32F103RC;

void Stm32_UI::UI_Head()
{
	cout << "----------Stm32��ʱ����������----------" << endl;
	cout << "-------ymx1256514743@outlook.com-------" << endl;
	cout << endl;
}

void Stm32_UI::UI_Choice()
{
	cout << "��ǰStm32оƬ��ƵΪ��" << Stm32F103RC.GetMhz() << endl;
	cout << "��ѡ��" << endl;
	cout << "1.������ʱ����" << endl;
	cout << "2.������Ƶ" << endl;
	cout << "3.ʹ��˵��" << endl;
}

void Stm32_UI::UI_Clean()
{
	system("cls");
	UI_Head();
}

void Stm32_UI::UI_Pause()
{
	system("pause");
}

void Stm32_UI::UI_ReadMe()
{
	cout << "������Stm32F10xϵ����ʱ�������㣺" << endl;
	cout << endl;
	cout << "void Delay(__IO u32 nCount)" << endl;
	cout << "{" << endl;
	cout << "  for(;nCount!=0;nCount--);" << endl;
	cout << "}" << endl;
	cout << endl;
	UI_Pause();
}
