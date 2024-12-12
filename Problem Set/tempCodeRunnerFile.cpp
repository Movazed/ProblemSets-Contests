lli cm = gcd(x, y);x /= cm;y /= cm;--n;--r;}return x;}
lli lcm(lli a, lli b){ if(a > b) swap(a, b); return (a * (b / gcd(a, b)));}