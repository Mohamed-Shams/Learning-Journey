n = int(input())

x = n%2
if(x==1 or (n>=6 and n<=20)):
    print("Weird")
elif((x==0) and ((n>20) or((n>=2)and(n<=5)))):
    print("Not Weird")
