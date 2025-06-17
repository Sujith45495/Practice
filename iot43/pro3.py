gender=int(input("enter the gender malr/female"))
salary=int(input("enter salary"))
if gender =='male':
    bonus=bonus*0.05
else:
    bonus=bonus*0.1
if salary<10000:
    bonus=bonus+salary*0.02
print("enter "gender" and "salary"")    

