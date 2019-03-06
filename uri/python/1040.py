n1, n2, n3, n4 = input().split()
media = (2*float(n1)+3*float(n2)+4*float(n3)+float(n4))/10

print("Media: %.1f" %media)

if(media>=7):
    print("Aluno aprovado.")

elif(media<5):
    print("Aluno reprovado.")

else:
    print("Aluno em exame.")

    e = float(input())

    print("Nota do exame: %.1f" %e)

    mf  = (media + e)/2

    print("Aluno aprovado." if(mf>=5) else "Aluno reprovado.")

    print("Media final: %.1f" %mf)