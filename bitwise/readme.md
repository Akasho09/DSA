 ##  Bit Manipulation
 
 # divide by 2 get remainders gives binary num of decimal num
 # multiply by 2^p each binary digit and adding them gives decimal num of binary
 
# AND 
10 & 12 is {
    1010
    1100
    ----
    1000 = `8`
}

# OR
10 OR 12 is {
    1010
    1100
    ----
    1110 = `14`
}

# XOR = exclusive OR
10 xor 12 is {
    1010
    1100
    ----
    0110 = `6`
}

# SHIFT 
Right shift :
x >> n is {
   ` x/2^n`
}

Left Shift :
x << n is{
   ` x*2^n`
eg :
`1 << n` is 2^n
2^3 = 8
0001 ==> 1000
}

# NOT ---- ~-6=5 , ~6 = -7  ===> {~n = -n-1}
int p = ~n
1. it flips n
2. checks if -ve => 2s comp
   else flippednum
eg p=~5
0 0000 0000 0000 0000 0000 0000 0000 101
1 1111 1111 1111 1111 1111 1111 1111 010  -- flips => -ve => 2s compl
1 0000 0000 0000 0000 0000 0000 0000 101  => sign bit as its
0 0000 0000 0000 0000 0000 0000 0000 001 
-----------------------------------------
1 0000 0000 0000 0000 0000 0000 0000 110 



eg p=~(-5)
0 0000 0000 0000 0000 0000 0000 0000 101
1 1111 1111 1111 1111 1111 1111 1111 010
0 0000 0000 0000 0000 0000 0000 0000 001
-----------------------------------------
1 1111 1111 1111 1111 1111 1111 1111 011  == -5
0 0000 0000 0000 0000 0000 0000 0000 100  -- flips => stores as its


## Integers 
# Signed Integers (int, short, long, etc.)
Stored in `two's complement` format to handle positive and negative values. {+ve as its and -ve in 2s complement}
The most significant bit (`MSB`) is used as the sign bit (0 for positive, 1 for negative).
Example: int is typically 4 bytes (32 bits), where the range is -2,147,483,648 to 2,147,483,647. (-2^31 -- 2^31-1)
# Unsigned Integers (unsigned int, unsigned long, etc.)
Only positive values are stored, so all bits represent the value.
Example: unsigned int uses 4 bytes, giving a range of 0 to 4,294,967,295.

1 1111 1111 1111 1111 1111 1111 1111 111 = -2^31-1
0 0000 0000 0000 0000 0000 0000 0000 000 = 0
1 0000 0000 0000 0000 0000 0000 0000 000 = -2^31

- {-2^31-1} will be stored as  `0 0000 0000 0000 0000 0000 0000 0000 001`
0 1111 1111 1111 1111 1111 1111 1111 111
1s complement
1 0000 0000 0000 0000 0000 0000 0000 000
0 0000 0000 0000 0000 0000 0000 0000 001
----------------------------------------
1 0000 0000 0000 0000 0000 0000 0000 001  ==> 2s Comp

- {-2^31} will be stored as `1 0000 0000 0000 0000 0000 0000 0000 000 `
1 0000 0000 0000 0000 0000 0000 0000 000 
0 1111 1111 1111 1111 1111 1111 1111 111 --1s
0 0000 0000 0000 0000 0000 0000 0000 001
----------------------------------------
1 0000 0000 0000 0000 0000 0000 0000 000 


- {0} will be stored as `0 0000 0000 0000 0000 0000 0000 0000 000`
0 0000 0000 0000 0000 0000 0000 0000 000
1 1111 1111 1111 1111 1111 1111 1111 111 --1s comp
0 0000 0000 0000 0000 0000 0000 0000 001 -- +1
----------------------------------------
1 0 0000 0000 0000 0000 0000 0000 0000 000


# why are numbers stored as 2s complement
1. Single Representation for Zero

2. Makes Easier Calculations 
5 + (-3) = 2
{5}= 101
0 0000 0000 0000 0000 0000 0000 0000 101
{-3} = 11
1 1111 1111 1111 1111 1111 1111 1111 101 -- stored as 
----------------------------------------
0 0000 0000 0000 0000 0000 0000 0000 010 == +2 ans 


# 1's Complement
1s to 0s & 0s to 1s 
11001 -> 00110

# 2s Complement
1s Complement + add 1
eg 11000 => 00111 
            +   1
            -----
            01000




10%2
5%2

3 = 11
3 = 111 
1+-2+4+-8