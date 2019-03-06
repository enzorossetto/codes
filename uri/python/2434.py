N, S = input().split()
N = int(N)
S = int(S)

f = [int(input()) for i in range(N)]

for i in range(N):
    S = S + f[i]
    f[i] = S

f.sort()
print(f[0])