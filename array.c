#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		if(i<5){

			a[i] = i+1;
		}
		else{
			a[i] = i-1;
		}
	}
	return 0;
}
