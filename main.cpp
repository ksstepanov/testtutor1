#include "constants.h"
int main(void)
{
	printf("Hello!\n");
	printf("constant from _constants.h_ is: %d\n",main_const);
	printf("Hello_2!\n");
	printf("this branch is hello_add. it is parallel to branch calc_inc.\n");
	printf("calc_sub modified.second commit in culc_sub branch\n"); 
	while(1)
	{
	printf("Here is a simple calc!\n");
	char flag='f';
	printf("Enter A to get summ a+b or enter S to get a-b\n");
	fflush(stdin);
	scanf("%c",&flag);
	if ((flag=='A')||(flag=='a'))
	{
	printf("It counts a+b.\n");
	printf("Enter a:\n");
	int a,b;
	fflush(stdin);
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	printf("a+b=%d\n",a+b);
	fflush(stdin);
	getchar();
	printf("Calc works good! This string is made in commit calc_final, made after hello_add in master branch\n\n");
	}
	else
	{
		if((flag=='S')||(flag=='s'))
		{
			printf("It counts a-b.\n");

			printf("Enter a:\n");
			int a,b;
			fflush(stdin);
			scanf("%d",&a);
	
			printf("Enter b:\n");
			scanf("%d",&b);
			printf("a-b=%d\n",a-b);
			fflush(stdin);
			getchar();
			printf("Calc works good! This string is made in commit calc_final, made after hello_add in master branch\n\n");
		}
	}
	printf("type q to exit, something else to continue:\n");
	//char flag='A';
	fflush(stdin);
	scanf("%c",&flag);
	getchar();
	fflush(stdin);
	if((flag=='q')||(flag=='Q'))
	{exit(1);}
	//fflush(stdin);
	}
	return(1);
}
