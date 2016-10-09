
int* countBits(int num, int* returnSize) {
	int i = 0;//all numbers that <= num
	int *BitArray = (int*)malloc((num-1)*sizeof(int));//BitArray[i] store the numbers of the 1 in i
	
	for(i;i<=num;i++)
	{
		if(i == 0)
		{
			BitArray[0] = 0;
			return BitArray;
		}
		if(i == 1)
		{
			
		}
		int j = 0;
		int k = 0;
		j = i;
		k = i;
		int BitLength = 0;//the length of all the bit string(include 0 and 1)
		while(j)
		{
			j = j>>1;
			BitLength++;
		}
		while(k)
		{
			k = k - 2<<(BitLength - 2);
			BitArray[i]++;
		}
	}
	return BitArray;
}	
