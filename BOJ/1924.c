#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	
		switch (x - 1)
		{
      case 12: y += 31;
      case 11: y += 30;
      case 10: y += 31;
      case 9: y += 30;
      case 8: y += 31;
      case 7: y += 31;
      case 6: y += 30;
      case 5: y += 31;
      case 4: y += 30;
      case 3: y += 31;
      case 2: y += 28;
      case 1: y += 31; break;
      case 0: break;    
		}
		
    switch ((y-1)%7)
    {
      case 0: printf("MON"); break;
      case 1: printf("TUE"); break;
      case 2: printf("WED"); break;
      case 3: printf("THU"); break;
      case 4: printf("FRI"); break;
      case 5: printf("SAT"); break;
      case 6: printf("SUN"); break;
    }
  
  return 0;
}
