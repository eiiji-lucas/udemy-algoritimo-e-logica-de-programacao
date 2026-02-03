#Faça um programa que leia um nome de usuario e a sua senha e nao aceite a senha igual ao nome do usuario, 
#mostrando a mensagem de erro caso isso acontece e voltando a pedir as informacoes

#entradas 
nome = input("Informe o nome: ")
senha = input("Informe a senha: ")

#processamento
while nome == senha:
    print("Nome de usuario e senha devem ser diferentes. ")
    nome = input("Informe o nome: ")
    senha = input("Informe a senha: ")
    