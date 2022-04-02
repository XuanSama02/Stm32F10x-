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
	//计算公式为：[nCount 除以 (主频Mhz 乘以 1000)] 等于 毫秒
	int Mhz = GetMhz() * 1000;
	return static_cast<double>(nCount) / Mhz;
}
