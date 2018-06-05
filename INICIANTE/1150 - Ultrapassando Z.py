# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
z = int(input())
aux = x

while z <= x:
    z = int(input())
y = x
aux2 = 1
while y <= z:
    if aux <= z:
        aux2 += 1
    y += 1
    aux += y
print(aux2)


