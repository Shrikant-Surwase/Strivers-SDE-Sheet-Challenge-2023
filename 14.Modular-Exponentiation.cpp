#Modular Exponentiation 
##Problem Statement

You are given a three integers 'X', 'N', and 'M'. Your task
is to find (*X' ^ 'N' % 'M'. A ^ B is defined as A raised to
power B and A % C is the remainder when A is divided
by C.

CODE:
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	   long ans=1;

        while(n>0){

            if(n%2==1){

                ans=(1LL*(ans)%m*(x)%m)%m;

                n--;

            }

            x=(1LL*(x)%m*(x)%m)%m;

            n >>= 1;

        }  

        return (int)ans;

	
}
