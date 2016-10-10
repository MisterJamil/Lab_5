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
	printf("Type rainfall for month of January\n");
	scanf("%lf", &dblJan);
	if (dblJan < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}

	printf("Type rainfall for month of February\n");
	scanf("%lf", &dblFeb);
	if (dblFeb < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of March\n");
	scanf("%lf", &dblMar);
	if (dblMar < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of April\n");
	scanf("%lf", &dblApr);
	if (dblApr < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of May\n");
	scanf("%lf", &dblMay);
	if (dblMay < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of June\n");
	scanf("%lf", &dblJun);
	if (dblJun < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of July\n");
	scanf("%lf", &dblJul);
	if (dblJul < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}

	printf("Type rainfall for month of August\n");
	scanf("%lf", &dblAug);
	if (dblAug < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}

	printf("Type rainfall for month of September\n");
	scanf("%lf", &dblSep);
	if (dblSep < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}

	printf("Type rainfall for month of October\n");
	scanf("%lf", &dblOct);
	if (dblOct < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of November\n");
	scanf("%lf", &dblNov);
	if (dblNov < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}
	
	printf("Type rainfall for month of December\n");
	scanf("%lf", &dblDec);
	if (dblDec < 0) {
		printf("Error : Invalid value\n");
		return 0;
	}

	//Calculations
	dblTotRain = dblJan + dblFeb + dblMar + dblApr + dblMay + dblJun + dblJul + dblAug + dblSep + dblOct + dblNov + dblDec;
	dblAvgRain = dblTotRain / 12;

	//Output
	printf("Total rainfall for the year : %.2lf\n", dblTotRain);
	printf("Average monthly rainfall : %.2lf\n", dblAvgRain);
	
	return 0;
}

