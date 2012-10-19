#include "constants.h"
int main(void)
{
	printf("Hello!\n");
	printf("constant from _constants.h_ is: %d\n",main_const);
	printf("Hello_2!\n");
	printf("this branch is hello_add. it is parallel to branch calc_inc.\n");

	while(1)
	{
	printf("Here is a simple calc! It counts a+b.\n");
	printf("Enter a:\n");
	int a,b;
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	printf("a+b=%d\n",a+b);
	getchar();
	printf("Calc works good! This string is made in commit calc_final, made after hello_add in master branch\n\n");
	printf("type q to exit, something else to continue:\n");
	char flag='A';
	scanf("%c",&flag);
	if((flag=='q')||(flag=='Q'))
	{exit(1);}
	}
	return(1);
}
