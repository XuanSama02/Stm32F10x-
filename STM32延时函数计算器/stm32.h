#pragma once

class Stm32
{
public:
	Stm32();  //��ʼ��stm32����Ƶ��Ϊ72Mhz
	void WriteMhz(int NewMhz);  //д���µ�����Ƶ��
	int GetMhz();  //��ȡĿǰ������Ƶ��
	double Delay(int nCount);  //�����ӳ�ʱ��(ms)
private:
	int Stm32_ClockSpeed_Mhz = 0;  //stm32ʱ����Ƶ
};
