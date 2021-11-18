
def sum(n):
    sm=0
    for i in range(1,n+1):
        sm+=i
    return sm




t = int (input())

while t:
    n = int(input())
    print(sum(n))
    t=t-1