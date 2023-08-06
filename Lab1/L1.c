#include <stdio.h>
struct Person {
  char name[32];
  int age;
  float height;
  char gender;
};
union Salary {
  int monthlySalary;
  float yearlySalary;
};
int main() {
  struct Person person;
  union Salary salary;
  printf("Enter the person's name: ");
  scanf("%s", person.name);
  printf("Enter the person's age: ");
  scanf("%d", &person.age);
  printf("Enter the person's height: ");
  scanf("%f", &person.height);
  printf("Enter the person's gender: ");
  scanf(" %c", &person.gender);
  printf("Enter the person's monthly salary: ");
  scanf("%d", &salary.monthlySalary);
  printf("The person's details are:\n");
  printf("Name: %s\n", person.name);
  printf("Age: %d\n", person.age);
  printf("Height: %.2f\n", person.height);
  printf("Gender: %c\n", person.gender);
  printf("Monthly salary: %d\n", salary.monthlySalary);
  salary.yearlySalary = salary.monthlySalary * 12;
  printf("Yearly salary: %.2f\n", salary.yearlySalary);
  return 0;
}