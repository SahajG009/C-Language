//switch(expression) {

   //case constant-expression  :
     // statement(s);
     // break; /* optional */
	
   // case constant-expression  :
      // statement(s);
      // break; /* optional */
  
   /* you can have any number of case statements */
   // default : /* Optional */
   // statement(s); }

#include <stdio.h>
 
int main () {

   /* local variable definition */
   char grade;
   printf("Enter Grade: ");
   scanf("%c",&grade);

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
        printf("Good\n");
        break;
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}