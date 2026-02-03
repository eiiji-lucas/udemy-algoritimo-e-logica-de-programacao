#Elabore um algoritmo que leia um número. Se for positivo armazene-o em 'a', se for negativo em 'b'.
#No final mostrar o resultado

#entrada
valor = int(input("Informe o valor: "))

#processamento
if valor > 0:
    a = valor
    print("Valor positivo")
    print(a)
else:
    b = valor
    print("Valor negativo")
    print(b)