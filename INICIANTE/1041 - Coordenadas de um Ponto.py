# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
n = input()
n = n.split(" ")
x,y = n
x=float(x)
y=float(y)

if y > 0 and x > 0:
    print("Q1")
if y > 0 and x < 0:
    print("Q2")
if y < 0 and x < 0:
    print("Q3")
if y < 0 and x > 0:
    print("Q4")
if y == 0 and x > 0:
    print("Eixo X")
if y == 0 and x < 0:
    print("Eixo X")
if y < 0 and x == 0:
    print("Eixo Y")
if y > 0 and x == 0:
    print("Eixo Y")
if x == 0 and y == 0:
    print("Origem")
