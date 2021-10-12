#include <stdio.h>
#include "contacts.h"

int main(int argc, char **argv){

  char name[MAX_STR];
  char phone[MAX_STR];
  
  printf("Enter a new name: ");
  fgets(name, MAX_STR, stdin);
  
  printf("\n");

  printf("Enter a new phone: ");
  fgets(phone, MAX_STR, stdin);

  printf("name: %s, phone: %s\n", name, phone);

  return 0;
}
