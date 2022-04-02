#include <iostream>
#include <Windows.h>
#include "stm32.h"
#include "UI.h"

using namespace std;

extern Stm32 Stm32F103RC;

void Stm32_UI::UI_Head()
{
	cout << "----------Stm32延时函数计算器----------" << endl;
	cout << "-------ymx1256514743@outlook.com-------" << endl;
	cout << endl;
}

void Stm32_UI::UI_Choice()
{
	cout << "当前Stm32芯片主频为：" << Stm32F103RC.GetMhz() << endl;
	cout << "请选择：" << endl;
	cout << "1.计算延时函数" << endl;
	cout << "2.设置主频" << endl;
	cout << "3.使用说明" << endl;
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
	cout << "适用于Stm32F10x系列延时函数计算：" << endl;
	cout << endl;
	cout << "void Delay(__IO u32 nCount)" << endl;
	cout << "{" << endl;
	cout << "  for(;nCount!=0;nCount--);" << endl;
	cout << "}" << endl;
	cout << endl;
	UI_Pause();
}
