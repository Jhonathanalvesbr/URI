# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = input()
x = x.split(" ")
a,b=x
a = float(a)
b = float(b)

if a%b == 0 or b%a == 0:
        print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
