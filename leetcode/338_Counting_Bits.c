int* countBits(int num, int* returnSize) {
	int i = 0;
	int *BitArray = (int*)malloc((num+1)*sizeof(int));//BitArray[i] store the numbers of the 1 in i
	BitArray[0] = 0;
	for(i;i <= num;i++)
	{	
		BitArray[i] = BitArray[i>>1] + (i&1);
	}
	*returnSize = num + 1;
	return BitArray;
}	
