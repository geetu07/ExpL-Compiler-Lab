#ifndef EVALUATE_H
#define EVALUATE_H

#include "ex1.h"

extern int var[26];

void ePrint(struct tnode *root);
int evaluate(struct tnode *root);
int getVarIndex(struct tnode *root);

#endif