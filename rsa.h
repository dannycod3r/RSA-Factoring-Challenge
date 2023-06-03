#ifndef _RSA_H_
#define _RSA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(unsigned long long int);
int is_even(unsigned long long int);
void find_factors(unsigned long long int);
void find_factors2(unsigned long long int num);

#endif
