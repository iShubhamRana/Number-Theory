sometimes the constrains are too tight that factorising each element is time consuming therefore below are the 2 techniques
What we do is do somework for the entire constraints and then use that work to optimise in test case , kind of precomputation

1. Which i liked 
if we know the any one min primefactor of each element in 1 to n, we can find prime factorisation of each element k in 1 to n
HOW? by diving it continuously by the minimu, prime factor of that number

const int N = 1e7 + 5;
int mind[N];

void preprocess() {
    REP(i, 0, N - 1) mind[i] = i;

    REP(p, 2, N - 1) {
        if (mind[p] != p) continue;
        for (int d = 2 * p; d < N; d += p) {
            mind[d] = min(mind[d], p);
        }
    }
}
vector<int> getPrimes(int v) {
    vector<int> ps;
    while (v > 1) {
        if (ps.empty() or ps.back() != mind[v]) ps.PB(mind[v]);
        v /= mind[v];
    }
    return ps;
}





2. second is also very simple see , when we calculate factorization we go till root n , we get prime factors but we also iterate on some non prime factors 
to avoid that we can do is

step1:precalculate all the divisors and then apply the factorization algorithm while primefactor p*p <=n , NOW WE HAVE REMOVED THE ITERATION ON THE NON PRIMES
