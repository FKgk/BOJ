#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[101];
	gets(string);
	int len = strlen(string);
  
	while (len-- > 0)
	{
		if (string[len] >= 'a' && string[len] <= 'z')
        {
            if(string[len] <= 'm')
				string[len] = (string[len] + 13);
			else
				string[len] = (string[len] - 13);
		}
        else if (string[len] >= 'A' && string[len] <= 'Z')
        {	
            if (string[len] <= 'M')
				string[len] = (string[len] + 13);
			else
				string[len] = (string[len] - 13);
	    }
    }

	printf("%s\n", string);

  return 0;
}
