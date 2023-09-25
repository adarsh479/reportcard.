#include <stdio.h>
int main ()
{
  int M1 , M2 , M3 , M4 , M5 ;  // where M1,M2,M3,M4,M5 are marks of Physics,Maths,Chemistry,Computer Science and English respectively
  printf("Enter Marks of Physics : ");
  scanf("%d",&M1);
  printf("Enter Marks of Maths : ");
  scanf("%d",&M2);
  printf("Enter Marks of Chemistry : ");
  scanf("%d",&M3);
  printf("Enter Marks of Computer Science : ");
  scanf("%d",&M4);
  printf("Enter Marks of English : ");
  scanf("%d",&M5);
  float percentage = ( M1+ M2 + M3 + M4 +M5 ) / 5 ;
  printf("Percentage of five subjects is : %f",percentage);
  printf("\n");
  if ( percentage > 33 ) {
    printf("Pass"); }
  else {
    printf("Fail"); }
  if ( M1 > 75 ) {
    printf("\nDistinction in Physics "); }
  if ( M2 > 75 ) {
    printf("\nDistinction in Maths "); }
  if ( M3 > 75 ) {
    printf("\nDistinction in Chemistry "); }
  if ( M4 > 75 ) {
    printf("\nDistinction in Computer Science "); }
  if ( M5 > 75 ) {
    printf("\nDistinction in English "); }

    return 0 ;
}
