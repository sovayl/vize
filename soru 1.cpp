
#include <iostream>
void sýnavvize() {


	int dizinn[10]{ 3,3,3,66,76,66,78,78,72,72 };

	int j;
	for (j = 0; j < 10; j++)
	{
		int adet23 = 0;
		printf("dize de sayýlar bunlar %d \n", dizinn[j]);
		for (int i = 0; i < 10; i++)
		{
			if (dizinn[j] == dizinn[i])
			{

				adet23++;



			}
		}printf("%d----->%d\n", dizinn[j], adet23);

	}


}