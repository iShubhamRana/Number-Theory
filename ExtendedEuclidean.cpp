/*
Time complexity of gcd.
gcd(a,b) = gcd(b,a%b) 
a%b = a - floor(a/b)*b;
a%b <= a- b       --------------------1
also a%b <= b-1   --------------------2

2 * (a%b) <= a - 1
a%b <= a/2

Worst case O(log2(a))
*/

int gcd(int a , int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/*
Recursive relation for extended euclidean

qx + by = gcd(a,b)

bx1 + (a%b)y1 = gcd(b,a%b)
a%b = a - b*floor(a/b)

b*x1 + (a - b*floor(a/b))*y1 = gcd(b,a%b)
b*(x1 - floor(a/b)*y1) + a*y1 = gcd(a,b)

---------------------------------
x = y1                          | 
y = x1 - floor(a/b)*y1          |
---------------------------------

*/
vector<int> extendedGCD(int a, int b) {
    if (b == 0) {
        return {1, 0 , a};
        //a is gcd
    }

    auto result = extendedGCD(b, a % b);
    int x1 = result[0], y1 = result[1];
    int x = y1;
    int y = x1 - (a / b) * y1;
    return {x, y, result[2]};
}
