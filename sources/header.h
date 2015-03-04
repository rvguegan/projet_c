#include <stdio.h>

int somme(int e1, int e2);

typedef struct sAnglesTheta {
	double Theta1, Theta2, Theta3, Theta4, Theta5;
} AnglesTheta;

typedef struct sLocal{
	double x, y, z;
} Local;

typedef struct sVector {
	Local local;
	float l;	//longueur
} Vector;

typedef struct sLine {
	Local local;
	Vector v;
} Line;
