i, f = input().split()
i = int(i)
f = int(f)

if(i > f):
    print("O JOGO DUROU %d HORA(S)" %(24-i+f))

elif(i<f):
    print("O JOGO DUROU %d HORA(S)" %(f-i))

else:
    print("O JOGO DUROU 24 HORA(S)")