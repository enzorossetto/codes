i, mi, f, mf = input().split()
i = int(i)
mi= int(mi)
f = int(f)
mf = int(mf)

if(mf>mi):
    if(f>=i):
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(f-i, mf-mi))
    elif(i>f):
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(24-i+f, mf-mi))

elif(mi>mf):
    if(f>i):
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(f-i-1, 60-mi+mf))
    elif(i>=f):
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(23-i+f, 60-mi+mf))
else:
    if(i==f):
        print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
    elif(i<f):
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(f-i, mf-mi))
    else:
        print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(24-i+f, mf-mi))
