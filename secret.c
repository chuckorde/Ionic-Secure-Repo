// IONIC_PROTECT_REPO

//

#include <stdio.h>



int main()

{

	// Secret alphabet algorithm

	int a = 0x40;

	for (int i = 0; i <= 100; ++i)

	{

		if(i % 4 == 0)

		{

			a++;

			printf("%c", a);

		}

	}



	printf("\n");

	return 0;

}

//end of file

