#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int year51;

	printf("輸入一個西元年數：");

	scanf("%d" , &year51);

	if(year51 % 400 == 0 )

			printf("%d年是閏年\n",year51);  

	else if(year51 % 100 == 0)

			printf("%d年是平年\n",year51);

	else if(year51 % 4 == 0)

			printf("%d年是閏年\n",year51);

	else

			printf("%d年是平年\n",year51);

    system("pause");

    return 0; 

}
