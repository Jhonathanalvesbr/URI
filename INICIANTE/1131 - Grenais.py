# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
whi = 0
contador = 0
inter = 0
empate = 0
gremio = 0
k = 0
whi2 = 2
j = 0
j2 = 2
while whi != whi2:
    x = input()
    x = x.split(" ")
    x,y = x
    x = int(x)
    y = int(y)
    if x > y:
        gremio = gremio +1
        contador = contador + 1
        k = 1
    if x < y:
        inter = inter +1
        contador = contador + 1
        k = 1
    if x == y:
        empate = empate +1
        contador = contador + 1
        k = 1
    if k == 1:
        k = 0
        j = 0
        while j != j2:
            j = int(input("Novo grenal (1-sim 2-nao)\n"))
            if j == 1:
                break
    if j == 2:
        break

print("%d grenais" %contador)
print("Inter:%d" %gremio)
print("Gremio:%d" %inter)
print("Empates:%d" %empate)

if inter < gremio:
    print("Inter venceu mais")
elif inter > gremio:
    print("Gremio venceu mais")
elif inter == gremio:
    print("Nao houve vencedor")
