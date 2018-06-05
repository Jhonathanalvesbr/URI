a = input()
a = a.split(" ")
x = 0
soma = 0
aux = 0
while x < len(a):
    x += 1
x -=1
if len(a) == 2:
    n = int(a[1])
    a = int(a[0])
else:
    n = int(a[x])
    a = int(a[0])

if n > a:
    a,n=n,a

while aux < n:
    soma = soma + a
    a += 1
    aux += 1
print(soma)
