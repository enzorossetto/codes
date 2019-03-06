num = input().split()
num[0] = int(num[0])
num[1] = int(num[1])
num[2] = int(num[2])

sortn = num[:]
sortn.sort()
print("%d\n%d\n%d" % (sortn[0],sortn[1],sortn[2]))
print("\n%d\n%d\n%d" % (num[0],num[1],num[2]))
