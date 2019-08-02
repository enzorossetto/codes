num= input().split()
num[0]= int(num[0])
num[1]= int(num[1])

num.sort()

if((num[0] > 0) and (num[1]%num[0] == 0)):
    print("Sao Multiplos")

else:
    print("Nao sao Multiplos")