/*Sto ispisuje*/

#include <stdio.h>

int main(void)
{
	int prvi = 0, drugi;
	while (prvi < 3) {
		for (drugi = 1; drugi <= 3; drugi = drugi + 1)
			printf("%d %d\n", prvi, drugi);
		prvi = prvi + 1;
	}

	getchar();
	getchar();
	return 0;
}