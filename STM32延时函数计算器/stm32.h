#pragma once

class Stm32
{
public:
	Stm32();  //初始化stm32运行频率为72Mhz
	void WriteMhz(int NewMhz);  //写入新的运行频率
	int GetMhz();  //读取目前的运行频率
	double Delay(int nCount);  //计算延迟时间(ms)
private:
	int Stm32_ClockSpeed_Mhz = 0;  //stm32时钟主频
};
