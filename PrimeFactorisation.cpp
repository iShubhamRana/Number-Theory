
void solve() {

    ll n; cin >> n;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1)
        cout << n;
}


if we need to factorise many numbers and the constraints are too tight then we need to , we can also once extract all the primes and run this algorithm on primes 

because in this algorithm even though we are always getting primes but in between we are also iterating over composite elements which can be avoided if we create vector of primes
