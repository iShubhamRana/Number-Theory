/*
a < 10^15
b < 10^15
c < 10^15
find (a*b)%c

we can alpply modulare artihm here as ifc>a and b
then the poblem will again reduce to original problem

a * b
=
a + a + a + a ............. b times
we can use binary exponentiation here

*/

long long int fastMultiplication(int a , int b , int c) {
	long long int res = 0;

	while (b > 0) {
		if (b & 1) res = (res + a) % c ;
		a = 2 * a % c ;
		b >>= 1;
	}
	return res;
}
