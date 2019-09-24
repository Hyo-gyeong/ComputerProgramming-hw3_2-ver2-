#include <stdlib.h>
#include <stdio.h>
#include <time.h> //c���� "�������� ���"�̱� ������ main�� ���� ó���� �θ� ȣ���ϴ� �Լ��� �ؿ� �־ �����Ұ� - �̷����� �Լ� ���ǰ� �ʿ�
// �ٸ����, ���������� �Լ��� �� �����ְ� ������ �ؿ��ִ� �Լ��� ȣ������ ������ �Լ��������� �ʿ� ����.

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

   for (i = 0; i < size; i++) { // i = 1�� �����ص� ����
     if (arr[maxId] < arr[i])
        maxId = i;
     if (arr[minId] > arr[i])
        minId = i;
	}
   printf("�ִ밪: �ε��� = %d, �� = %d\n", maxId, arr[maxId]);
   printf("�ּҰ�: �ε��� = %d, �� = %d\n", minId, arr[minId]);

   return;

}
int main(void) // �������� ����
{
	 int a[10];
	 srand(time(NULL));

	 //srand(100); // �������� �³� ���� ���ؼ� seed�� 100���� ����
	 initArray(a, 10);
	 printArray(a, 10);
	 printMinMax(a, 10);

	 return 0;

}