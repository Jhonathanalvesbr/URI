# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
sort= input()
sort = sort.split(" ")
a,b,c = sort

a = int(a)
b = int(b)
c = int(c)

x,y,z=a,b,c


if a > b:
    b,a = a,b
if a > c:
    c,a = a,c
if b > a:
    a,b = a,b
if b > c:
    c,b = b,c
if c > a:
    a,c = a,c
if c > b:
    b,c = b,c

print(a)
print(b)
print(c)
print("")
print(x)
print(y)
print(z)



