#include "player.h"
#include "dice.h"
static int keep [N_DICE];




 int KeepWhichDice(void){
	 int userinp;
	 printf("input one die at the time that you want to keep, Finish with a 0");
	 while(TRUE){
	userinp = GetInteger();
		if(userinp == 0) break;
	 keep[userinp-1] = KEEP 
	 }


}