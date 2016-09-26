#include <stdio.h>

enum response_type {DUMP,SECOND_CHANCE,MARRIAGE};


typedef struct{
	char *name;
	enum response_type type;
}respense;

void dump(respense r);
void second_chance(respense r);
void marriage(respense r);

void (*replies[])(respense) = {dump,second_chance,marriage};

int main()
{
	respense r[]={
		{"Mike",DUMP},{"Lius",SECOND_CHANCE},{"Matt",SECOND_CHANCE},{"William",MARRIAGE}
	};
	int i;
	for(i = 0;i < 4;i++)
	{
		/*switch(r[i].type)
		{
			case DUMP:
				dump(r[i]);
				break;
			case SECOND_CHANCE:
				second_chance(r[i]);
				break;
			default:
				marriage(r[i]);
		}*/
		(replies[r[i].type])(r[i]);
	}
	return 0;
}

void dump(respense r)
{
	printf("Dear %s,\n",r.name);
	puts("Unfortunately your last date contacted us to");
	puts("say that they will not be seeing you again");
}

void second_chance(respense r)
{
	printf("Dear %s,\n",r.name);
	puts("Good news:your last date has asked us to");
	puts("arrange another meeting.Please call ASAP.");
}

void marriage(respense r)
{
	printf("Dear %s,\n",r.name);
	puts("Congratulations! your last date has contacted");
	puts("us with a proposal of marriage.");
}