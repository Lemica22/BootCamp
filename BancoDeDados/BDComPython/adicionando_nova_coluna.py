import sqlite3

cnn = sqlite3.connect('cliente.db')
cursor = cnn.cursor()

# adicionando uma nova coluna na nossa tabela
cursor.execute("""
ALTER TABLE tbl_cliente
ADD COLUMN sobrenome TEXT;
""")

cnn.commit()
print("O novo atributo na tabela foi devidamente criado")

cnn.close()