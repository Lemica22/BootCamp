import sqlite3

cnn = sqlite3.connect('cliente.db')
cursor = cnn.cursor()

# leitura de dados
cursor.execute("""
SELECT * FROM tbl_cliente
""")

for linhas in cursor.fetchall():
    print(linhas)

cnn.close()