def fib(n):
    if (n==1):
       return (1)
    else:
       return(fib(n-1)+f(n+1))
x= int(input("enter x:"))
print(fib(x))
