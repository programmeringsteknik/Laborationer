#include "dice.h"
#include "player.h"


int calculateOnePair(int dice[]){
	int i;
	for (i = 0; i < N_DICE -4; i++){
		if (dice[i] == dice[i + 1])
			return(dice[i] + dice[i + 1]);
	}
	return 0; // No OnePair
}
int calculateTwoPair(int dice[]){
	int i;
	for (i = 0; i < N_DICE-1; i++){
		if (dice[i] == dice[i + 1]){
			return(dice[i] + dice[i + 1]);
		}
		if (dice[i + 2] == dice[i + 3]){
			return(dice[i + 2] + dice[i + 3]);
		}
	}
	return 0; // No TwoPair 
}
int calculateTrips(int dice[]){
	int i;
	for (i = 0; i < N_DICE - 2; i++){
		if (dice[i] == dice[i + 2])
			return(dice[i] + dice[i + 1] + dice[i + 2]);
	}
	return 0; // No trips 
}
int calculateFours(int dice[]){
	int i;
	for (i = 0; i < N_DICE - 1; i++){
		if (dice[i] == dice[i + 3])
			return(dice[i] + dice[i + 1] + dice[i + 2] + dice[i + 3]);
	}
	return 0; // No fours 
}
int calculateYatzy(int dice[]){
	int i;
	for (i = 0; i < N_DICE; i++){
		if (dice[i] == dice[i + 4])
			return(dice[i] + dice[i + 1] + dice[i + 2] + dice[i + 3] + dice[i + 4]);
	}
	return 0; // No Yatzy 
}