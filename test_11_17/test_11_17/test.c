#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//32λDebug�汾����ѭ����Release�汾��û����ѭ�� - Release�汾�������Ż���
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}

//int check_system()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}

//int check_system()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//����1��ʾС�ˣ�����0��ʾ���
//}
//
//int main()
//{
//	//д�����жϵ�ǰ�������ֽ���
//	int ret = check_system();
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111 - a
//	//%d��ӡ(��������)
//	//11111111111111111111111111111111
//	//-1
//	signed char b = -1;
//	//11111111 - b
//	//11111111111111111111111111111111
//	//-1
//	unsigned char c = -1;
//	//11111111 - c
//	//00000000000000000000000011111111
//	//255
//	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
//	
//	//-1 -1 255
//	//�ض� -> ��������
//	return 0;
//}

//����
// 1.char������ signed char ���� unsigned char ?
// C���Բ�û�й涨��ȡ���ڱ��������󲿷ֱ�����Ϊ signed char 
// 
// ��C���Թ涨
// int   �� signed int
// short �� signed short

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 -> ����
//	//10000000
//	//-128
//	//11111111111111111111111110000000 ��������
//	//%u �޷������� ԭ������ͬ
//	//11111111111111111111111110000000
//	printf("%u\n", a);// 4294967168
//	printf("%d\n", a);// -128
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000 -> -128
//	//11111111111111111111111110000000  
//	printf("%u\n", a);//4294967168
//	return 0;
//}

// char���ͱ�����ȡֵ��Χ
// 00000000 -> 0
// 00000001 -> 1
// 00000010 -> 2
// ...
// 01111111 -> 127
// ----------
// 10000000 -> -128
// 10000001 -> 10000000 -> 11111111 -> -127
// ...
// 11111110 -> 11111101 -> 10000010 -> -2
// 11111111 -> 11111110 -> 10000001 -> -1
// 
//�з��ŵ�char��ȡֵ��Χ�ǣ�-128 ~ 127
//�޷��ŵ�char��ȡֵ��Χ�ǣ�0 ~ 255
// 
//-129
//10000000000000000000000010000001
//11111111111111111111111101111110
//11111111111111111111111101111111
//01111111 -> 127

//������Χ��������������������ȥ256
//������Χ����������Ǹ����������256
// 
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	//
//	//11111111111111111111111111101100 - i
//	//00000000000000000000000000001010 - j
//	//11111111111111111111111111110110 - i+j ����
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010 - i+j Դ�� -> -10
//	printf("%d\n", i + j);// -10
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//��ѭ��
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	// -1 -2 -3 ... -127 -128 127 126 125 ... 3 2 1 0 -1 -2 ... -127 -128 127 ...
//
//	printf("%d", strlen(a));//�ҵ�\0 -> 0 
//	//128+127=255
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//��ѭ��
//	}
//	return 0;
//}
//00000000000000000000000011111111 -> 255
//00000000000000000000000100000000 -> 255+1
//00000000 -> 0

//#include<limits.h>
//#include<float.h>
//int main()
//{
//	int a = INT_MAX;
//	float b = FLT_MAX;
//	double c = DBL_MAX;
//	printf("IntMax = %d\n", a);
//	printf("FloatMax = %f\n", b);
//	printf("DoubleMax = %lf\n", c);
//	return 0;
//}

//�����ʹ洢

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);// 9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);// 0.000000 
//	//*pFloat�Ը��������ӽ�ȥ���ڴ��е����� 09 00 00 00
//
//	*pFloat = 9.0;//*pFloat�Ը��������ӽ�ȥ�洢���� 
//	printf("n��ֵΪ��%d\n", n);// 1091567616
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);// 9.000000
//
//	return 0;
//}

//���������������ڴ��д洢�ķ�ʽһ����������ģ�
//�������Բ���Ķ��������еķ�ʽ�����ȥ�ģ������д�С�˵�һ��˳������

//int main()
//{
//	float f = 5.5f;
//	// 101.1
//	// 1.011 * 2^2
//	// s=0 M=1.011 E=2
//	// s=0 M=011 E=2+127
//	// 0100 0000 1011 0000 0000 0000 0000 0000
//	// 40 b0 00 00
//	return 0;
//}

//int main()
//{
//	double f = 5.5;
//	// 101.1
//	// 1.011 * 2^2
//	// s=0 M=1.011 E=2
//	// s=0 M=011 E=2+1023
//	// 0100 0000 0001 0110 0000 0000 0000 0000 
//	// 0000 0000 0000 0000 0000 0000 0000 0000 
//	// 40 16 00 00 
//	// 00 00 00 00
//	return 0;
//}

int main()
{
	int n = 9;
	//00000000000000000000000000001001
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);// 9
	//00000000000000000000000000001001
	printf("*pFloat��ֵΪ��%f\n", *pFloat);// 0.000000 
	//*pFloat�Ը��������ӽ�ȥ���ڴ��е����� 09 00 00 00
	//0 00000000 00000000000000000001001
	//s    E             M
	//0.00000000000000000001001*2^-126
	//0.000000

	*pFloat = 9.0;//*pFloat�Ը��������ӽ�ȥ�洢���� 
	//1001.0
	//1.001*2^3
	//s=0 M=1.001 E=3
	//s=0 M=001 E=3+127
	//0 10000010 00100000000000000000000
	printf("n��ֵΪ��%d\n", n);// 1091567616
	//01000001000100000000000000000000
	printf("*pFloat��ֵΪ��%f\n", *pFloat);// 9.000000
	//0 10000010 00100000000000000000000

	return 0;
}