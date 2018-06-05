# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
n = int(input())
x = 1
ir = 0
ir2 = 0
while x <=n:
    leia = int(input())
    if leia >= 10 and leia <= 20:
        ir = ir +1
    else:
        ir2 = ir2 +1
    x = x +1
print("%d in" %ir)
print("%d out" %ir2)
