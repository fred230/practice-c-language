#include <stdio.h>
#include <stdlib.h>

struct room
{
   
   char* condition ;  
   struct room* next;


};

void printlist(struct room* n){
   int z = 0;
   while(n != NULL){
      printf("%s\n",n ->condition );
      z++;
      n= n->next;
   }

   printf("N = %d", z);



}


int main(){

struct room* my_room223 = NULL;
struct room* next_room224 = NULL;
struct room* second_next_room225 = NULL;

/*Allocating memory*/
my_room223 = (struct room*)malloc(sizeof(struct room));
next_room224 = (struct room*)malloc(sizeof(struct room));
second_next_room225 = (struct room*)malloc(sizeof(struct room));

my_room223 ->condition = "good";
my_room223 ->next = next_room224;

next_room224 -> condition = "bad";
next_room224 ->next = second_next_room225;

second_next_room225 ->condition = "fair";
second_next_room225 ->next = NULL;

printlist(my_room223);






}