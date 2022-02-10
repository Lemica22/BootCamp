import sqlite3

cnn  = sqlite3.connect('cliente.db')
cursor = cnn.cursor()

novo_cpf = 66655544433
novo_telefone = 988887777

# alterando os dados na tabela

cursor.execute("""
UPDATE tbl_cliente
SET cpf = ?, telefone = ?
WHERE id = 10
""", (novo_cpf, novo_telefone))

cnn.commit()

print("As atualizações foram efetivadas no sistema")

cnn.close()