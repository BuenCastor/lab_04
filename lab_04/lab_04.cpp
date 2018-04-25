#include "stdafx.h"

int main() {
	int c;
	int sp = 0;
	while ((c = getchar()) != EOF) {
		if (isspace(c)) {
			if (sp)
				continue;
			else
				sp = 1;
		}
		else
			sp = 0;
		putchar(c);
	}
	return 0;
}
