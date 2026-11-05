# include <stdio.h>

void cheer(int i)
{
	printf("cheer %d",i);
}

int main()
{
	int i=6;
	int *p;
	p=&i;
	cheer(2.4);
	printf("sizeof=%d\n",sizeof(&i));
	printf("0x%x\n",p);
	return 0;
}
