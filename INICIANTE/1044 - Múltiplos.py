# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
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
