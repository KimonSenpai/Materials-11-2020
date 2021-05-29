# Max sum of elements in pairs, that haven't divider 14.

# print(bin(25)[2:])
k = int(input(), base=5)
print(bin(k), hex(k), oct(k))
'''
f = open("27.txt", 'r')
n = int(f.readline())
s = 0
minDif = 100000000
for line in f:
    a, b = map(int, line.split())
    s += max(a, b)
    if a-b % 14 != 0:
        minDif = min(minDif, abs(a - b))

if s % 14 == 0:
    s -= minDif
print(s)
'''
