#include "header.h"
#include <math.h> 
#include <string.h>

char araToRom (int ara){
	T_unit = ["","I","II","III","IV","V","VI","VII","VIII","IX"];
	T_diz = ["","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"];
	T_cent = ["","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"];
	
	int milAra = floor(ara/1000);
	int centAra = floor(ara%1000);
	int dizAra = floor(ara%100);
	int unitAra = ara%10;
	
	for (i=0;i<milAra;i++)
		char milRom = strcat(milRom,"M");
	char centRom = T_cent[centAra];
	char dizRom = T_diz[dizAra];
	char unit = T_unit[unitAra];
	
	char rom = strcat(milRom,centRom,dizRom,unitRom);
	
	return rom;
}