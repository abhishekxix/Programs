

import math
import os
import random
import re
import sys

n=int(input("Enter a number"))
if not n%2==0 :
        print("\nWeird")
elif n%2==0 and n in range(2,5):
    print("\nNot weird")
elif n%2==0 and n in range(6,20):
     print("\nWeird")
elif n%2==0 and n>20:
        print("\nNot weird")

n = int(input())

output = ''

for i in range(n+1) :
    output += str(i)
print(output)
