#include "stm32.h"

Stm32::Stm32()
{
	Stm32_ClockSpeed_Mhz = 72;
}

void Stm32::WriteMhz(int NewMhz)
{
	Stm32_ClockSpeed_Mhz = NewMhz;
}

int Stm32::GetMhz()
{
	return Stm32_ClockSpeed_Mhz;
}

double Stm32::Delay(int nCount)
{
	//���㹫ʽΪ��[nCount ���� (��ƵMhz ���� 1000)] ���� ����
	int Mhz = GetMhz() * 1000;
	return static_cast<double>(nCount) / Mhz;
}
