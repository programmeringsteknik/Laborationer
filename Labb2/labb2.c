#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "random.h"
#include "dice.h"
#include "player.h"
#include "Scoring.h"
#include "scoreTable.h"
void initlizeScoreTable();
void printFinalScore();
main(){
	/*initializeScoreTable();  
	playYatzy();  
	printFinalScore();*/
	rollDice();
}
/*
for(i=0;i<NUMBEROFROUNDS;i++){  
	playOneTurn();  
	printScore();  
	updateScoreTable(getRow());   
	printScore(); 
} 


for(i=0;i<2;i++){  //First two rolls 
rollDice();  printDice();  keepWhichDice();
}
rollDice(); //Last roll printDice();*/ 