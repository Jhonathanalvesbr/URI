# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

"Pares"
cotadorpares  = 0
if a%2==0:
    cotadorpares = cotadorpares +1
if b%2==0:
    cotadorpares = cotadorpares +1
if c%2==0:
    cotadorpares = cotadorpares +1
if d%2==0:
    cotadorpares = cotadorpares +1
if e%2==0:
    cotadorpares = cotadorpares +1

"Impares"
cotadorimpares  = 0
if a%2==1:
    cotadorimpares = cotadorimpares +1
if b%2==1:
    cotadorimpares = cotadorimpares +1
if c%2==1:
    cotadorimpares = cotadorimpares +1
if d%2==1:
    cotadorimpares = cotadorimpares +1
if e%2==1:
    cotadorimpares = cotadorimpares +1

"Positivos"
contadorpositivos = 0
if a > 0:
    contadorpositivos = contadorpositivos +1
if b > 0:
    contadorpositivos = contadorpositivos +1
if c > 0:
    contadorpositivos = contadorpositivos +1
if d > 0:
    contadorpositivos = contadorpositivos +1
if e > 0:
    contadorpositivos = contadorpositivos +1

"Negativos"
contadornegativos = 0
if a < 0:
    contadornegativos = contadornegativos +1
if b < 0:
    contadornegativos = contadornegativos +1
if c < 0:
    contadornegativos = contadornegativos +1
if d < 0:
    contadornegativos = contadornegativos +1
if e < 0:
    contadornegativos = contadornegativos +1

print("%d valor(es) par(es)" %cotadorpares)
print("%d valor(es) impar(es)" %cotadorimpares)
print("%d valor(es) positivo(s)" %contadorpositivos)
print("%d valor(es) negativo(s)" %contadornegativos)


