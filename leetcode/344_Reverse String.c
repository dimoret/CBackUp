char* reverseString(char* s) {
	int len = 0;
	len = strlen(s);

	char* p = (char*)malloc((len+1)*sizeof(char));
	int i = 0;
	for(i;i<len;i++)
	{
		p[i] = s[len-i-1];
	}
	p[len] = '\0';
	return p;
}