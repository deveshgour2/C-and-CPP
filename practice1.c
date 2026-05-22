#include<stdio.h>
void main()
{
	int days,years,weeks;
	days=1329;
	
	years=1329/365;
	{
		printf("years=%d",years);
	}
	
	  weeks=(1329%365)/7;
	{
		printf("weeks=%d",weeks);
	}
	  days= days-((years*365)+(weeks*7));
	  {
	  	printf("days=%d",days);
	  }
}






