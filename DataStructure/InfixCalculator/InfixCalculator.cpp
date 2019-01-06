#ifndef __INFIXCALCULATOR_CPP__
#define __INFIXCALCULATOR_CPP__

#include <string.h>
#include <stdlib.h>
#include "InfixToPostfix.h"
#include "InfixToPostfix.cpp"
#include "PostCalculator.h"
#include "PostCalculator.cpp"

int EvalInfixExp(char exp[])
{
	int len = strlen(exp);
	int ret;
	char * expcpy =  (char*)malloc(len+1);
	strcpy(expcpy, exp);
	
	ConvToRPNExp(expcpy);
	ret =  EvalRPNExp(expcpy);
	
	free(expcpy);
	return ret;
}

#endif
