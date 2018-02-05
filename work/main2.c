#include "task2.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100
#define M 61// weight or 'x'
#define N 20//height or 'y'
#define limitX  (M/ 2)
#define limitY (N/ 2)
#define LIMITunit 15//(M / 2*(M*10/20))
#define STAR '*'
char arr[N+2][M+2] ;
int main()
{
	int i = 0;
	clock_t now;
	while (i++<20)
	{
		now = clock();
		while (clock() < (now + 1*CLOCKS_PER_SEC));
			clearMatrix(arr);
			fillMatrix(arr);
			setMatrix(arr);
			printMatrix(arr);
	}
	return 0;
}



/*  �������� ��������� ������������, ��������� �� ����� �����������, ������������ �� ����������� ������������� ��������� �*�.
   ����������� ����������� � ��������� ���������� �������, � ����� ��� ����� � ����������� ���������� � ��������� ��� �����.
���������

������� ������ ��������� � ���� ��������� ������������������ �����:

������� ������� (���������� ���������)
������������ ��������� ������� �������� ������ ��������� (�� ��������)
����������� �������� � ������ ��������� �������
������� ������
����� ������� �� ����� (���������)
��������� ��������
������� � ���� 1.
������

��������� ������ �������� �� �������:

   void clearMatrix(char (* arr)[M]) - ���������� ���������� ������� (�������) ���������
   void fillMatrix(char (* arr)[M]) - ��������� �������� ������ ��������� ������� �����������
   void setMatrix(char (* arr)[M]) - ����������� ��������� � ������ ������� �������
   void printMatrix(char (* arr)[M]) - ������ �������
   int main()
��������� ��� �����: task2.h,task2.c,main2.c.*/