/*
412. Fizz Buzz   QuestionEditorial Solution  My Submissions
Total Accepted: 6986
Total Submissions: 12052
Difficulty: Easy
Contributors: Admin
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
AC:3ms
*/
char** fizzBuzz(int n, int* returnSize) {
	char **p = (char**)malloc(n*sizeof(char*));
	int i = 1;
	for(i;i<=n;i++)
	{
		p[i-1] = (char*)malloc(16*sizeof(char));
		if(i%15==0)
		{
			p[i-1] = "FizzBuzz";
		}else if(i%3==0){
			p[i-1] = "Fizz";
		}else if(i%5==0){
			p[i-1] = "Buzz";
		}
		else
		{
			sprintf(p[i-1],"%d",i);
		}
	}
	*returnSize = n;
	return p;
}