#include "dice.h"
#include "random.h"
static int dice [N_DICE];

void rollDice(void){
	int i;
	Randomize();
	for(i=0;i<N_DICE;i++){
	dice[i] = RandomInteger(1,6);
	}
	printDice();
}
void printDice(void){
	int i;
	for(i=0;i<N_DICE;i++){
	printf("Die #%d %d\n",i+1,dice[i]);
	}
}
int getDie(int index){
	if(index <=5 && index >=0){
	 return dice[index];
	}
}