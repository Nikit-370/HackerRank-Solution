import math
import os
import random
import re
import sys
from collections import Counter

# Complete the whatFlavors function below.
def whatFlavors(cost, money):
   
    d=Counter(cost)
       
    for sunny in cost:
        johnny=money-sunny
        if sunny!=johnny:
            if d[johnny]>0:
                j=cost.index(johnny)
                print(cost.index(sunny)+1,j+1)
                return
        else:
            if d[johnny]>1:
                j=cost[cost.index(johnny)+1:].index(johnny)
                print(cost.index(sunny)+1,j+2+cost.index(sunny))
                return

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        money = int(input())

        n = int(input())

        cost = list(map(int, input().rstrip().split()))

        whatFlavors(cost, money)
