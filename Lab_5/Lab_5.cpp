// Lab_5.cpp : Defines the entry point for the console application.
// Author : Jamil Saliba
// Date : 10/9/16
// Description : Sores total rainfall of each month and returns total rainfall for the year, average monthly rainfall, and most/least rain month.

/*Rainfall Program

	Write a RainFall program that stores the total rainfall for each of 12 months into an array of doubles.

	The program should have methods that return the following:

*	The total rainfall for the year

*	The average monthly rainfall

*	The month number with the most rain (not the amount)

*	The month number with the least rain (not the amount)

	Demonstrate program. Input Validation should not allow negative numbers.
*/

#include "stdafx.h"


int main()
{
	//Variable declaration

	double dblJan, dblFeb, dblMar, dblApr, dblMay, dblJun, dblJul, dblAug, dblSep, dblOct, dblNov, dblDec, dblTotRain, dblAvgRain;
	
	//Input
	
	if (dblJan < 0 || dblFeb < 0 || dblMar < 0 || dblApr < 0 || dblMay < 0 || dblJun < 0 || dblJul < 0 || dblAug < 0 || dblSep < 0 || dblOct < 0 || dblNov < 0 || dblDec < 0);
	printf("Error: Invalid number");

	printf("Type rainfall for month of January\n");
	scanf("%lf", &dblJan);
	
	printf("Type rainfall for month of February\n");
	scanf("%lf", &dblFeb);
	
	printf("Type rainfall for month of March\n");
	scanf("%lf", &dblMar);
	
	printf("Type rainfall for month of April\n");
	scanf("%lf", &dblApr);
	
	printf("Type rainfall for month of May\n");
	scanf("%lf", &dblMay);
	
	printf("Type rainfall for month of June\n");
	scanf("%lf", &dblJun);
	
	printf("Type rainfall for month of July\n");
	scanf("%lf", &dblJul);

	printf("Type rainfall for month of August\n");
	scanf("%lf", &dblAug);

	printf("Type rainfall for month of September\n");
	scanf("%lf", &dblSep);

	printf("Type rainfall for month of October\n");
	scanf("%lf", &dblOct);
	
	printf("Type rainfall for month of November\n");
	scanf("%lf", &dblNov);
	
	printf("Type rainfall for month of December\n");
	scanf("%lf", &dblDec);

	//Calculations
	dblTotRain = dblJan + dblFeb + dblMar + dblApr + dblMay + dblJun + dblJul + dblAug + dblSep + dblOct + dblNov + dblDec;
	dblAvgRain = dblTotRain / 12;

	//Output
	printf("Total rainfall for the year : %.2lf\n", dblTotRain);
	printf("Average monthly rainfall : %.2lf\n", dblAvgRain);
	
	return 0;
}

