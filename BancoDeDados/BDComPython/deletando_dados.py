import sqlite3

cnn = sqlite3.connect('cliente.db')
cursor = cnn.cursor()

id_excluido = 13

#excluindo um registro na tabela

cursor.execute("""
DELETE FROM  tbl_cliente
WHERE id =?
""", (id_excluido,))

cnn.commit()

print("O id selecionado foi devidamente excluido")

cnn.close()