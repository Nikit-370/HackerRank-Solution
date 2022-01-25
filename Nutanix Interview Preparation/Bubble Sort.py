import math
import os
import random
import re
import sys

# Complete the countSwaps function below.
def countSwaps(a):
    swaps=0
    for i in range(len(a)):
        for j in range(len(a)-1):
            if a[j]> a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]
                swaps+=1
    print("Array is sorted in " + str(swaps) + " swaps.")
    print("First Element: " + str(a[0]))
    print("Last Element: " + str(a[len(a)-1]))

if __name__ == '__main__':
    n = int(input())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
