/*
 * test.c
 * 
 * Copyright 2023  <tom@raspberrypi>
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main (void)
{
	int a;
	
	int *ptr_to_a;
	
	ptr_to_a = &a;
	
	a = 5;
	printf ("The value of a is %d\n", a);
	
	*ptr_to_a = 6;
	printf ("The value of a is %d\n", a);
	
	printf ("The value of ptr_to_a is %d\n", ptr_to_a);
	printf ("It stores the value %d\n", *ptr_to_a);
	printf ("the address of a is %d\n", &a);
	
	int x = sum (54444, 5432211);
	
	printf ("%d",  x);
}

int sum (int a, int b)
{
	int res;
	res = a + b;
	return res;
}

