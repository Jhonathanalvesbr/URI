# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a = input()
a = a.split(" ")
a,b = a
a = int(a)
b = int(b)
soma = 0
if a > b:
    a,b=b,a
k1 = 0
while a <= b:
    print(a, end=(" "))
    soma = soma +a
    if a == b:
        print("Sum=%d" %soma)
        soma = 0
        a = input()
        a = a.split(" ")
        a,b = a
        a = int(a)
        b = int(b)
        if a > b:
            a,b=b,a
        k1 = 1
    if a <= 0 or b <= 0:
        break
    if k1 == 1:
        a = a -1
        k1 = 0
    a = a +1
