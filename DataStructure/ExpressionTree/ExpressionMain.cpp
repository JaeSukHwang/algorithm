#ifndef __EXPRESSIONMAIN_CPP__
#define __EXPRESSIONMAIN_CPP__

#include <stdio.h>
#include "ExpressionTree.h"
#include "ExpressionTree.cpp"

int main(void)
{
	char exp[] = "12+7*";
	BTreeNode * eTree = MakeExpTree(exp);
	
	printf("���� ǥ����� ����: ");
	ShowPrefixTypeExp(eTree); printf("\n");
	
	printf("���� ǥ����� ����: ");
	ShowInfixTypeExp(eTree); printf("\n");
	
	printf("���� ǥ����� ����: ");
	ShowPostfixTypeExp(eTree); printf("\n");
	
	printf("������ ���: %d \n", EvaluateExpTree(eTree));
	
	return 0;
}

#endif
