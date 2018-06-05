# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = input()
x = x.split(" ")
a,b,c = x
a = float(a)
b = float(b)
c = float(c)

if a < b:
    a,b=b,a
if a < c:
    a,c=c,a
if b < a:
    a,b=a,b
if b < c:
    c,b=b,c
if c < a:
    a,c=a,c
if c < b:
    b,c=b,c

if a >= (b+c):
    print("NAO FORMA TRIANGULO")
else:
    if a**2 == ((b**2)+(c**2)):
        print("TRIANGULO RETANGULO")
    if a**2 > (b**2)+(c**2):
        print("TRIANGULO OBTUSANGULO")
    if a**2 < (b**2)+(c**2):
        print("TRIANGULO ACUTANGULO")
    if a == b and a == c:
        print("TRIANGULO EQUILATERO")
    if a==b!=c or b==c!=a:
        print("TRIANGULO ISOSCELES")
