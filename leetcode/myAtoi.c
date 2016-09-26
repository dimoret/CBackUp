
int myAtoi(char* str) {
	long long int symbol = 1;
	long long int result = 0;
	int i = 0;
	long long int bound = 2147483648;
	
	if(str[i] == '\0')
		return 0;
	
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			i++;
			continue;
		}
		if(str[i] == '0' && (str[i-1] <'0' || str[i] > '9') )
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
		if(str[i] < '0' || str[i] > '9')
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
	if(symbol*result < 0)
		return (unsigned)(bound + (symbol*result + bound ));
	else return symbol*result;
}