/* int�� ���� IntStack �ҽ�*/

#include<stdio.h>
#include<stdlib.h>
#include"IntStack.h"


/* ���� �ʱ�ȭ */

int Initialize(IntStack *s, int max){
	s->ptr =0;
	if(((s->stk) = calloc(max,sizeof(int)))==NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

/* ���ؿ� �����͸� Ǫ�� */
int Push(IntStack *s, int x){
	if (s->ptr >= s->max)
	{
		return -1;
	}
	s->stk[s->ptr++] = x;
	return 0;	
}

/* ���ؿ��� �����͸� �� */
int Pop(IntStack *s, int *x){
	if (s->ptr <= 0)
	{
		return -1;
	}
	*x = s->stk[s->ptr--];
	return 0;	
}

/* ���ؿ��� �����͸� ��ũ */
int Peek(const IntStack *s, int *x){
	if (s->ptr <= 0 )
	{
		return -1;
	}
	*x = s->stk[s->ptr - 1];
	return 0;	
}

/* ���غ��� */
void Clear(IntStack *s){
	s->ptr = 0;
}

/* ���� �뷮 */
int Capacity(const IntStack *s)
{
	return s->max;
}

/* ���ؿ� ���� ������ ��*/
int Size(const IntStack *s){
	return s->ptr;
}

/* ������ ����ִ°�? */
int IsEmpty(const IntStack *s){
	return s->ptr <= 0;
}

/* ������ ���� á�°�? */
int IsFull(const IntStack *s){
	return s->ptr >= s->max;
}

/* ���ؿ��� �˻� */
int Search(const IntStack *s, int x){
	int i;
	for ( i = s->ptr-1 ; i >= 0; i--)
	{	
		if (s->stk[i] == x)
		{
			return i;
		}
		return -1;
	}
}

/* ��� ������ ��� */
void Print(const IntStack *s){
	int i;
	for ( i = 0; i < s->ptr; i++)
	{
		printf("%d ", s->stk[i]); 
	}
	putchar( '\n');
}

/* ���� ���� */
void Terminate(IntStack *s){
	if (s->stk != NULL)
	{
		free(s->stk); /* code */
		s->max = s -> ptr = 0;
	}
}

