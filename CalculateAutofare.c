/*
There is a fixed minimum charge of Rs. 35 for the first 1.5km. After that every km is Rs.25.
Ask user to enter the distance travelled and calculate the amount you have to pay
Extend the program to include a waiting charge of Rs 1 for each minute beyond 5 minutes and no waiting charge for the first 5 minutes.
*/
#include<stdio.h>
void main()
{
    float fixedCharge = 35;//fixed minimum charge of Rs. 35 for the first 1.5km
    float chargePerOneKm = 25;
    float travellDistance;
    float totalTravelPrice ;
    float waitingMinute;
    float waitingCharge;

    printf("Enter the distance travelled : ");
    scanf("%f",&travellDistance);
    printf("Enter the waiting minutes : ");
    scanf("%f",&waitingMinute);

    totalTravelPrice = fixedCharge + (travellDistance-1.5)*chargePerOneKm;

    if(waitingMinute > 5){
        waitingCharge = (waitingMinute-5);
    }else{
        waitingCharge = 0.0;
    }

    printf("Total travelled distance price is : %f\n",totalTravelPrice);
    printf("Total waiting minute price is : %f\n",waitingCharge);
}