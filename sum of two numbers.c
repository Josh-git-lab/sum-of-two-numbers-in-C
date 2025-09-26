#include <stdio.h>
//RA2511003012176 JOSH JIBY
int main(){
	int n1,n2;
	char choice='Y';
	do{
	printf("Enter the two numbers you would like to add: ");
	scanf("%d %d",&n1,&n2);
	printf("The Sum of %d and %d is: %d",n1,n2,n1+n2);
	printf("\nWould you like to continue?(Y/N): ");
	scanf(" %c",&choice);
	} while(choice=='Y'||choice=='y');
	
	printf("\nThe program has Ended");
	return 0;
}
