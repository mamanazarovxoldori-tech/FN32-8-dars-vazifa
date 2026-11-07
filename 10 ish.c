#include <stdio.h>

int main() {

  int a,b;

  printf("Logini kiriting");
  scanf("%d",&a);

  printf("Parolni kiriting");
  scanf("%d",&b);

  if(a==777 && b==1234){ 
    printf("Tizimga xush kelibsiz");
  }else {
    printf("Login yoki parol noto'g'ri");
  }
 
 return 0;

}