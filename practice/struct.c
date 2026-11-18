#include <stdio.h>
#include <stdbool.h>

typedef struct {
  char name[50];
  int age;
  float cgpa;
  bool is_smart;
}Student;

int main () {

 Student student1 = {"Shubham Balwan", 18, 9.6, true};
 Student student2 = {"Balwan", 19, 9.0, true};

    printf("%s \n", student1.name);
    printf("%s\n", (student1.is_smart) ? "Very Smart" : "not Smart"); 

 return 0;
}
