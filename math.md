# Euclidean algorithm
The Euclidean algorithm uses repeated applications of Euclid's Division Lemma to find the HCF of two numbers. (The key idea is that the HCF of two numbers does not change if the larger number is replaced by its remainder when divided by the smaller number. )This process continues until the remainder is 0, at which point the divisor is the HCF.
hcf =>
while (b>0) {
    int temp=b;
    b=a%b;
    a=temp;
}
return a; // because of extra loop else b;
lcm => (a*b) / hcf ;