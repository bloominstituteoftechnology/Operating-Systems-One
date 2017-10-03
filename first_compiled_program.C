# include <stdio.h>

struct employee 
{
  char name[50];
  int id, n;
  int age;
  float height;
  double salary;
} emp[5];
int main() {
  int n,i;
  float num[100], sum = 0.0, avgsal;
  printf("\nEnter Employee details:\n");

  printf("Enter the numbers of employees: ");
    scanf("%d", &n);

  for(i = 0; i < n; i++) {
    emp[i].id = i + 1;
    printf("\nEmployee id %d: \n",emp[i].id);

    printf("\nEnter name:");
    scanf("%s",emp[i].name);

    printf("\nEnter age:");
    scanf("%d",&emp[i].age);

    if (emp[i].age < 10) {
      break;
    }

    printf("\nEnter height:");
    scanf("%f",&emp[i].height);

    printf("\nEnter salary:");
    scanf("%lf",&emp[i].salary);
    if (emp[i].salary==10) {
      continue;
    }
  }
  printf("\nEmployee details:\n\n");

  for (i = 0; i < 5; i++) {
    printf("\nEmployee id: %d\n",i+1);
    printf("Name: %s\n",emp[i].name);
    printf("Age: %d\n",emp[i].age);
    printf("Height: %.1f\n",emp[i].height);
    printf("Salary: %.1f\n",emp[i].salary);
  }
  printf("\nAverage Salary:\n\n");
  while (n > 100 || n <= 0){
    printf("\nEnter number again(try choosing less than 10):");
    scanf("%d",&n);
  }
  for(i = 0; i < n; ++i)
    {
        printf("%d. Enter salary: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avgsal = sum / n;
    printf("Average = %.2f", avgsal);
  return 0;
}