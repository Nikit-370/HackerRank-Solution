# Enter your code here. Read input from STDIN. Print output to STDOUT

import math
mu = float(input())
k = int(input())
print(math.exp(-mu) * (mu**k) / math.factorial(k))
