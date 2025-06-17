def fac(n):
     if (n==1):
         return(1)
     else:
         return (fac(n)*fac(n-1))
     x=int(input("enter x:"))
     print(fac(x))
            
