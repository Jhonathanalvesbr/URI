# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
ir2 = 0
x2 = 0
ir = 0
while ir > -1:
    ir = ir +1
    if x > x2:
        x2 = x
        ir2 = ir
    if ir == 100:
        break
    x = int(input())
print(x2)
print(ir2)
