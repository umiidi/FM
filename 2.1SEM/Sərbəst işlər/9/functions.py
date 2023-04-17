import random

def faktorial(n):
    if n==1: return 1
    else: return n*faktorial(n-1)

def rand(a, b):
    return random.randint(a,b)

def credit(a,b,c):
    for i in range(b):
        a+=a*c/100
    else: return a