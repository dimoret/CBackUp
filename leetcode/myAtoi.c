/*
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.
*/


int myAtoi(char* str) {
	int symbol = 1;
	int result = 0;
	int i = 0;
	
	if(str[i] == '\0')
		return 0;
	
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			if((str[i-1] >= '0' && str[i-1] <= '9') && i > 0)
			{break;}
			i++;
			continue;
		}
		if(str[i] == '0' && (str[i-1] <'0' || str[i-1] > '9') )
		{
			if(str[i+1] < '0' || str[i+1] > '9')
			{
				return 0;
			}
			i++;
			continue;
		}
		if(str[i] == '+' && str[i+1] >= '0' && str[i+1] <= '9')
		{
			i++;
			symbol = 1;
			continue;
		}
		if(str[i] == '-'&& str[i+1] >= '0' && str[i+1] <= '9')
		{
			i++;
			symbol = -1;
			continue;
		}
		if((str[i] < '0' || str[i] > '9') && (str[i] != ' '))
		{
			if(str[i-1] >= '0' && str[i-1] <= '9')
			{break;}
			else{return 0;}
		}
		if(str[i] >= '0' && str[i] <= '9')
		{
			result = result*10.0 + str[i] - '0';
			i++;
			continue;
		}
	}
	if((result >= 2147483648 || result <= -2147483648) && symbol == 1)
	{
		//printf("overflow\n");//for test
		return 2147483647;
	}
	if((result >= 2147483648 || result <= -2147483648) && symbol == -1)
	{
		//printf("overflow\n");//for test
		return -2147483648;
	}
	return symbol*result;
}
