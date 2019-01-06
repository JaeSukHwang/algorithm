//InfixToPostfix.cpp
#ifndef __INFIXTOPOSTFIX_H__
#define __INFIXTOPOSTFIX_H__

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "ListBaseStack.cpp"


int GetOpPrec(char op)
{
	switch(op)
	{
	case '*':
	case '/':
		return 5;
	case '+':
	case '-':
		return 3;
	case '(':
		return 1;
	}
	
	return -1;
}

int WhoPrecOp(char op1, char op2)
{
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);
	
	if(op1Prec > op2Prec)
		return 1;
	else if(op1Prec < op2Prec)
		return -1;
	else
		return 0;	
}

void ConvToRPNExp(char exp[])
{
	Stack stack1;
	int expLen = strlen(exp);
	char * convExp = (char*)malloc(expLen+1);
	
	int i, idx = 0;
	char tok, popOp;
	
	memset(convExp, 0, sizeof(char)*expLen+1);
	StackInit1(&stack1);
	
	for(i=0;i<expLen;i++)
	{
		tok = exp[i];
		if(isdigit(tok))
		{
			convExp[idx++] = tok;
		}
		else
		{
			switch(tok)
			{
			case '(':
				SPush(&stack1, tok);
				break;
			case ')':
				while(1)
				{
					popOp = SPop(&stack1);
					if(popOp == '(')
						break;
					convExp[idx++] = popOp;
				}
				break;
			case '+': case '-':
			case '*': case '/':
				while(!SIsEmpty(&stack1) && WhoPrecOp(SPeek(&stack1), tok) >= 0)
					convExp[idx++] = SPop(&stack1);
				SPush(&stack1, tok);
				break;	
			}
		}
	}
	
	while(!SIsEmpty(&stack1))
		convExp[idx++] = SPop(&stack1);
	strcpy(exp, convExp);
	free(convExp); 
}

#endif

