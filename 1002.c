/*
 * Author : Ronald Pereira
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


#include <stdio.h>
 
int main(){
 
    double pi, raio, a;
 
    scanf("%lf", &raio);
 
    pi = 3.14159;
 
    a = pi * (raio * raio);
 
    printf("A=%.4lf\n", a);
 
    return 0;
 
}
