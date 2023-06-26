#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++) {
		int r = rand() % 62;
		if (r < 10)
			password[i] = '0' + r;
		else if (r < 36)
			password[i] = 'a' + r - 10;
		else
			password[i] = 'A' + r - 36;
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return 0;
}

