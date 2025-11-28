#include <stdio.h>
#include <stdlib.h>

struct student{
			 int ID;
			 char name[10];
			 double grade;
};

int main(int argc, char *argv[]){
  struct student s1 = {000000, "name", 4.3};
	
	s1.ID = 2115657;
	strcpy(s1.name, "AnSoJeong");
	s1.grade = 3.5;
	
	printf("ID : %i, name : %s, grade : %lf\n", s1.ID, s1.name, s1.grade);
  
  system("PAUSE");	
  return 0;
}
