import sqlite3

# Conectando
cnn = sqlite3.connect('cliente.db')

#Definindo um cursor
cursor = cnn.cursor()

# Criando a tabela (schema)
cursor.execute("""
CREATE TABLE tbl_cliente (
        id INTERGER NOT NULL PRIMARY KEY,
        cpf INTERGER,
        nome TEXT NOT NULL,
        telefone TEXT, 
        cidade TEXT,
        criado_em DATE NOT NULL
 );
""")

# Aplica todas as mudanças na nossa database
cnn.commit()

print('Tabela foi criada com sucesso.')

#Desconectando operaçao
cnn.close()
