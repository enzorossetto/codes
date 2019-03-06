i = int(input())
j = int(input())
s = 0

if(i > j):
    i,j = j,i

while(i <= j):
    if(i%13 != 0):
        s = s + i
        
    i = i+1

print(s)