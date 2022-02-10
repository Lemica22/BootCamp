import _sqlite3
import sqlite3

print("Olá insira os sesus dados: \n")

usr_id   = input('Digite seu id: ')
usr_nome = input("Digite seu nome: ")
usr_cpf  = input("Digite seu cpf: ")
usr_telefone  = input("Digite seu telefone: ")
usr_cidade    = input("Digite sua cidade: ")
usr_criado_em = input("Digite a data de criacao: ")

'''
print(usr_id)
print(usr_nome)
print(usr_cpf)
print(usr_telefone)
print(usr_cidade)
print(usr_criado_em)
'''

cnn = sqlite3.connect('cliente.db')
cursor = cnn.cursor()

cursor.execute("""
INSERT INTO tbl_cliente (id, nome, cpf, telefone, cidade, criado_em)
VALUES (?,?,?,?,?,?)
""", (usr_id, usr_nome, usr_cpf, usr_telefone, usr_cidade, usr_criado_em))

cnn.commit()

print("Operação ocorrida sem falhas!")

cnn.close()