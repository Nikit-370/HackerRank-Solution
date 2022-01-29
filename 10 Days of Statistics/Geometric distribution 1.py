# Enter your code here. Read input from STDIN. Print output to STDOUT

# input defect probability (p) and failure trial (n)
nums = list(map(int, input().split()))
p = nums[0] / nums[1]
n = int(input())

# print rounded geometric distribution probability
print(round(((1-p)**(n-1)) * p, 3))
