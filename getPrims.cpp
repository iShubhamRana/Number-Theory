vector<int> primes;
 
void preprocess(int N) {
    vector<bool> prime(N+1, true);
    for (int i = 2; i * i <= N; i++) {
        if (!prime[i])continue;
        for (int j = i * i; j <= N; j += i) prime[j] = false;
    }
 
    for (int i = 2; i <= N; i++) {
        if(prime[i])
        primes.push_back(i);
    }
}vector<int> primes;
 
