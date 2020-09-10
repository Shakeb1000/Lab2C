// Author: Shakeb Siddiqui sms8508@psu.edu
// Collaborator: James Lyle jfl5989@psu.edu
// Collaborator:Emma Dischner etd5123@psu.edu
// Collaborator:
// Section: 10
// Breakout: 1
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double grade1 = atof(grade);
  if(grade1>=93.0){
    printf("Your letter grade for CMPSC 131 is A. \n");
  }
  else if(grade1>=90){
    printf("Your letter grade for CMPSC 131 is A-. \n");
  }
  else if(grade1>=87){
     printf("Your letter grade for CMPSC 131 is B+. \n");
  }
  else if(grade1>=83){
     printf("Your letter grade for CMPSC 131 is B. \n");
  }
  else if(grade1>=80){
     printf("Your letter grade for CMPSC 131 is B-. \n");
  }
  else if(grade1>=77){
     printf("Your letter grade for CMPSC 131 is C+. \n");
  }
  else if(grade1>=70){
     printf("Your letter grade for CMPSC 131 is C. \n");
  }
  else if(grade1>=60){
     printf("Your letter grade for CMPSC 131 is D. \n");
  }
  else if(grade1<60){
     printf("Your letter grade for CMPSC 131 is F. \n");
  }
  return 0;
}