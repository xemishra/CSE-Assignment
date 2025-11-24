#include <stdio.h>
#define METER 1000
#define FEET 3.28084
#define INCHES 39.37007874
#define CENTIMETER 100

int main(){
    int distance, distanceInmeter, distanceInCentimeter;
    float distanceInFeet, distanceInInches;
    printf("Enter the distance: ");
    scanf("%d", &distance);
    distanceInmeter = distance*METER;
    printf("%d Kms = %d Meters\n", distance, distanceInmeter);
    distanceInFeet = distanceInmeter*FEET;
    printf("%d Kms = %f Feet\n", distance, distanceInFeet);
    distanceInInches = distanceInmeter*INCHES;
    printf("%d Kms = %f Inches\n", distance, distanceInInches);
    distanceInCentimeter = distanceInmeter*CENTIMETER;
    printf("%d Kms = %d Centimeter\n", distance, distanceInCentimeter);
    return 0;

}
