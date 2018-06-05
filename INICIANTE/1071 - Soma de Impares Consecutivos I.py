# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
y = int(input())
ir = 0
y = y +1
while y < x:
    if y%2==1:
        ir = ir + y
    if y == x:
        break
    y = y +1
print(ir)


