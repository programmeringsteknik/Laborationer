#include "player.h"
#include "dice.h"
static int keep [N_DICE];




 int keepWhichDice(void){
	 int answer;
	 printf("input one die at the time that you want to keep, Finish with a 0\n");
	 while(TRUE){
		answer = GetInteger();
		if(answer == 0) break;
		keep[answer - 1] = KEEP;
	 }
 }/*
 int getrow(int index){
	 int row;

	 while(TRUE){
	 printf("what row do you want to out in your score?");
	 row=GetInteger();
	 }
}*/
 bool keepDie(int keep){
	 if (keep == 1){
		 return TRUE;
	 }
	 else{
		 return FALSE;
	 }
 }
 
