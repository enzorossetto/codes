while True:
    try:
        letras = input()
        q = int(input())
        mensagem = list(map(int, input().split()))

        for i in range(q):
            mensagem[i] = letras[mensagem[i]-1]

        print("".join(mensagem))
            
    except (EOFError):
        break