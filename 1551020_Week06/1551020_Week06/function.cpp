#include "function.h"

int CalS1(int n)
{
	int s=0;
	for (int i=1; i<=n; ++i)
	{
		s+=i;
	}
	return s;
}