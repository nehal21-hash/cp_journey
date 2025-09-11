
**Problem 1:-**

Given a number "N" determine whether ∃ 'r'  such that $T_r$ =  N; 

**Triangular Number**

• $T_r$  = $\frac{r*(r+1)}{2}$ 


**Hint:- T(r) is monotonic function so think of Binary Search  ✌🏻**

**Contraint:**
1<=N<=10^18

**Problem 2:-**

GIven a number "N" determine total no of divisor "N" have

**Hint :- If 'a' is divisor of 'N' then 'N/a' is also a divisor , Find Upper bound on 'a' ✌🏻**

**Constraint:**
1<=N<=10^12

**Problem 3:-**

You are given a permutation∗ 𝑝 of size 𝑛.

Your task is to find a permutation 𝑞 of size 𝑛 such that GCD†($𝑝_𝑖$ + $𝑞_𝑖$ ,$𝑝_j$ + $𝑞_j$ )≥3 for all 1≤𝑖,j<𝑛. In other words, the greatest common divisor of the sum of any two adjacent positions should be at least 3.

**Task 1:-**

Proof that there is always one sequence that satisfy this conditions 

**Task2:-**

Find the sequence :

**Hint:- For all 1<=i<=n , try to make $p_i$ + $q_i$ =  constant , find that 'constant' ✌🏻**

Gcd(a,b) = Greatest Common Divisor  ,like gcd(21,12) = 3 , gcd(4,10) = 2
**Example:**

 **•p  = [1, 3, 2]**
 
 **•q =  [2, 3, 1]**

**Constraint:**
3<=n<=10^5
1<= $p_i$ <=n


**Problem 4:-**

You are given a positive integer N and an integer sequence A=( $A_1$ ​, $A_2$​, …, $A_N​$ ) of length N.

Determine whether there exists a non-empty (contiguous) subarray of A that has a repeated value, occurring multiple times in A. If such a subarray exists, find the length of the shortest such subarray.

**Sample test**

n= 5
A = [3 ,9 ,5 ,3 ,1]

(3,9,5,3) and (3,9,5,3,1) satisfy the condition. The shorter one is (3,9,5,3), which has length 4.

**Constraint**

1<=N<=10^5
1<= $A_i$ <=10^5

**Hint:- Traverse from 1 to n  and store the last indices of each element in map**

**Or**
**Problem 4**

You are given an integer sequence A=($A_1$​,$A_2$​,…,$A_N​$) of length N.

Find how many pairs of integers (i,j) (1≤i<j≤N) satisfy =>  **j−i= $A_i$​ + $A_j $**​.


**Sample Test**

N = 9
A= [3, 1, 4, 1, 5, 9, 2, 6, 5]

For example, when (i,j)=(4,7), we have j−i=7−4=3 and $A_i$​ + $A_j$ ​= 1+2=3, so j−i=$A_i$​+ $A_j$​.

In contrast, when (i,j)=(3,8), we have j−i=8−3=5 and $A_i$​+$A_j$​ = 4+6 = 10, so j−i=$A_i$ ​+ $A_j$​.

Only the three pairs (i,j)=(1,9),(2,4),(4,7) satisfy the condition, so output `3`.

**Hint:-for each j find all occurrence of $A_i$ +i   where 1<=i<j  , and one more hint use map**

**Constraint**

1<=N<=10^5
1<= $A_i$ <=10^5
