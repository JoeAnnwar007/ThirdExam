#include <stdio.h>
int main() {

  int i, arr[6], sum = 0;

  printf("Enter the marks for six subjects : ");

  for(i = 0; i < 6; i++) {
      scanf("%d", arr+i);
      sum += *(arr+i);
  }

  printf("Sum = %d\n", sum);

  if(sum < 240){
    printf("Fail the exam \n");
  }else if(sum > 600){
    printf("Please rewrite your marks \n");
  }else if(sum >= 480){
    printf("Pass the exam with distinction");
  }else{
    printf("You pass the exam normally\n");
  }


  return 0;
}
