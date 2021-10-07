#include <stdio.h>

int main(){ 
	int year = 0;
	printf("yillar sonini kiriting:");
	scanf("%d", &year);
	int moth = 12, week_n = 48, days_n = 365;
	
	while(year){
         	moth *= year;
            days_n *= year;	
			week_n *= year; 
		    printf("%d Oy\n%d Kun\n%d Hafta",  moth, days_n , week_n);
		    
		break;
	}
}
