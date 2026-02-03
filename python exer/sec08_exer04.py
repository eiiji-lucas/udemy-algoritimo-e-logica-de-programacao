#Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros, em seguida, mostre a soma de todos os elementos

#variaveis 
vetor = []

#entradas
for n in range(0, 20):
    num = int(input("Informe {0}/20 valor para o vetor: ".format(n+1)))
    vetor.append(num)
print("A soma do vetor é {0}".format(sum(vetor)))