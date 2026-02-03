#Leia o codigo e numero de horas trabalhadas de um operario. Calcule o salario sabendo que ele ganha R$ 10 por hora.
#Quando o valor exceder 50, calcular o excedente sabendo que ganha R$20 por hora.

#variaveis
valor_hora = 10.00
valor_hora_excedente = 20.00
e = 0

#entradas
c = int(input("Informe o código: "))
n = float(input("Informe o número de horas trabalhadas: "))

#processamento
if n > 50:
    e = (n - 50) * valor_hora_excedente
    salario = (50 * valor_hora) + e
    print("O salário é {0:.2f}".format(salario))
    print("O extra é {0:.2f}".format(e))
else:
    salario = (n * valor_hora)
    print("Salário total R$ {0:.2f}".format(salario))
    print("Salário excedente R$ {0:.2f}".format(e))
