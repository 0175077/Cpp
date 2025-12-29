#include <iostream>

template<int nLength>
void printData(const int(&arData)[nLength]);

int main()
{
	int arData1[5]{ 5,4,3,2,1 };
	int arData2[3]{ 3,2,1 };
	int arData3[7]{ 7,6,5,4,3,2,1 };

	// 이렇게 쓰지말고
	printData(arData3);

	// 이렇게 쓰자
	printData<7>(arData3);


}

template<int nLength>
void printData(const int(&arData)[nLength])
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", arData[i]);
	}
	printf("\n");
}

// 템플릿에 넣을 수 있는건 기본 자료형 혹은 포인터 말고는 없다
