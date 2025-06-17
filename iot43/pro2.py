def rec_gcd(x,y):
    if(x/y==0):
        return y
    else:
        return ((x,y,x))
    x=int(input("enter a value"))
    y=int(input("enter a value"))
    print(rec_gcd(x,y))
def rec_fact(n):
    if n==0 or n==1:
        return 1
    else:
        return(n*(n-1))
    n=int(input("enter a number"))
    print(rec_fact(n))
def rec_fib(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fib(n=2)+fib(n=1)
    n=int(input("enter a number"))

