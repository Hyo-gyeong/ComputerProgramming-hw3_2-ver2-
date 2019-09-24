#include <stdlib.h>
#include <stdio.h>
#include <time.h> //c언어는 "절차지향 언어"이기 때문에 main을 가장 처음에 두면 호출하는 함수가 밑에 있어서 디버깅불가 - 이럴때는 함수 정의가 필요
// 다른경우, 절차적으로 함수가 잘 놓여있고 위에서 밑에있는 함수를 호출하지 않으면 함수정의해줄 필요 없음.

void initArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		arr[i] = rand() % 100;

	return;

}
void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

} 
void printMinMax(int arr[], int size)
{
   int i;
   int maxId = 0, minId = 0;

   for (i = 0; i < size; i++) { // i = 1로 시작해도 좋다
     if (arr[maxId] < arr[i])
        maxId = i;
     if (arr[minId] > arr[i])
        minId = i;
	}
   printf("최대값: 인덱스 = %d, 값 = %d\n", maxId, arr[maxId]);
   printf("최소값: 인덱스 = %d, 값 = %d\n", minId, arr[minId]);

   return;

}
int main(void) // 변경하지 말라
{
	 int a[10];
	 srand(time(NULL));

	 //srand(100); // 실행결과가 맞나 보기 위해서 seed를 100으로 고정
	 initArray(a, 10);
	 printArray(a, 10);
	 printMinMax(a, 10);

	 return 0;

}