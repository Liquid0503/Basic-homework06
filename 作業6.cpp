#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int year51;

	printf("��J�@�Ӧ褸�~�ơG");

	scanf("%d" , &year51);

	if(year51 % 400 == 0 )

			printf("%d�~�O�|�~\n",year51);  

	else if(year51 % 100 == 0)

			printf("%d�~�O���~\n",year51);

	else if(year51 % 4 == 0)

			printf("%d�~�O�|�~\n",year51);

	else

			printf("%d�~�O���~\n",year51);

    system("pause");

    return 0; 

}
