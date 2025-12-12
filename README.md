1. Conditional Statements
The MATLAB code will let user to enter a number, and return 
   “negative one” while entering “-1”,
   “zero” while entering “0”,
   “positive one” while entering “1”,
   “other value” while entering numbers other than above three.
The C++ function conditional_statements will do the same.

2. Printing a Vector
	The function print_vector will print out the input vector. Example:
vector<int> v = {1, 2, 3, 1234};
print_vector(v);
output:
1 2 3 1234

3. While Loops
	A Fibonacci sequence is defined as {a, b, c, …} while c is the sum of a and b. It should start from a = 1 and b = 2. We can use a while loop to generate this sequence. Since this sequence is diverging, we can set a constraint (4,000,000) to stop the loop. The function fibonacci will generate a such sequence.
The sequence is {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578}.

4. Functions
4.1 If Prime
	A number not less than 2 and only has factor 1 and itself is defined as a prime number. Function isprime will return a boolean variable to check if the input number is a prime.
	Some examples will be:
		isprime(2) = 1
isprime(10) = 0
isprime(17) = 1
4.2 Factorize
	Function factorize will give a integer vector that contains all the factors of the input integer. We can use print_vector in section 2 to print out results. Some examples will be:
		print_vector(factorize(2)): 1 2 
print_vector(factorize(72)): 1 2 3 4 6 8 9 12 18 24 36 72 
print_vector(factorize(196)): 1 2 4 7 14 28 49 98 196
4.3 Prime Factorization
	An integer can be factorized into a set containing only prime numbers. Function prime_factorize will give a vector of prime factorization. Some examples will be:
		print_vector(prime_factorize(2)): 2 
print_vector(prime_factorize(72)): 2 2 2 3 3 
print_vector(prime_factorize(196)): 2 2 7 7

5. Recursive Functions and Loops
	We can use recursive functions and loops to achieve a n rows of Pascal’s Triangle. Function pascal_triangle(n) can do this process without combinatorics. One example is 6 rows Pascal’s Triangel by pascal_triangle(6):
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

<img width="468" height="636" alt="image" src="https://github.com/user-attachments/assets/1319e67d-f196-407e-9c3a-ef91924964be" />
