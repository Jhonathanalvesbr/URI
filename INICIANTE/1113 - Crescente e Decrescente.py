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
while a != b:
    if a < b:
        print("Crescente")
    else:
        print("Decrescente")
    a = input()
    a = a.split(" ")
    a,b = a
    a = int(a)
    b = int(b)
    
