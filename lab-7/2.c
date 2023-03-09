// Use if else to create KIIT grade system 90-100 is 0 grade, 80-89 is E grade 70 to 79 is 'A' grade, 60 to 69 is 'B' grade 50 to 59 is grade, 40 to 49 is 'D' grade below 40 is grade

#include <stdio.h>

int main() {
   int marks;

   printf("Enter your marks: ");
   scanf("%d", &marks);

   if (marks >= 90 && marks <= 100) {
      printf("Grade A");
   }
   else if (marks >= 80 && marks < 90) {
      printf("Grade B");
   }
   else if (marks >= 70 && marks < 80) {
      printf("Grade C");
   }
   else if (marks >= 60 && marks < 70) {
      printf("Grade D");
   }
   else if (marks >= 0 && marks < 60) {
      printf("Grade F");
   }
   else {
      printf("Invalid marks entered!");
   }

   return 0;
}
