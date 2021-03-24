#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[4];
	for(int i=0;i<4;i++)
	{
		scanf("%c",&a[i]);
		fflush(stdin);
	}
  	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(char i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(a[i] > a[j])
			{
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		printf("%c ",a[i]);
	}


  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
