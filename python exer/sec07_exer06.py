#Desenvolva um gerador de tabuadas capaz de calcular qualquer numero inteiro de 1 a 10

#entrada
numero = int(input("Informe um número entre 1 a 10: "))

#processamento
while numero < 1 or numero > 10:
    numero = int(input("Informe um número entre 1 a 10: "))
print("Tabuada de {0}".format(numero))
for n in range (1, 11):
    print("{0} x {1} = {2}".format(numero, n, (numero * n)))
    