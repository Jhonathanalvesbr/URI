# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
n = int(input())
ir = 1
x = 0
y = 0
while ir <= n:
    if ir%2==0:
        x = ir**2
        y = y +2
        print("%d^2 = %d" %(y,x))
    ir = ir +1
