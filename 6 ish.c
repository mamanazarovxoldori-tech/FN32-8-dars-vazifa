#include <stdio.h>

int main()
{

  int yosh,ball;

  printf("Yoshingizni kiriting ");
  scanf("%d",&yosh);

  printf("Tayyorgarlik balingizni kiriting");
  scanf("%d",&ball);
  if(yosh>=16 && ball>=50){

  printf("Imtihonga kirishi mumkin");
  }else {
  printf("Imtihonga kira olmaydi");
  }

  return 0;

}