# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

mean_ = 2.4*100
std_ = 100**(1/2)*2.0

cdf = lambda x: 0.5 * (1 + math.erf((x - mean_) / (std_ * (2 ** 0.5))))

result = cdf(250.0)

print ('{:.4f}'.format(result))
