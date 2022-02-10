import sqlite3

# Conectando 
cnn = sqlite3.connect('cliente.db')
cursor = cnn.cursor()

# Inserindo dados unitários;

'''
# Inserindo dados na tabela
cursor.execute("""
INSERT INTO tbl_cliente (id, nome, cpf, telefone, cidade, criado_em)
VALUES ('4','Roberto Dinamite', '000111222', '93610499', 'rio', '10011992')
""")
'''
lista = [('10', 'lebron james', ' 000', '111', 'al', '0101'),
         ('11', 'Kevin durant', '001', '112', 'am', '0102'),
         ('12', 'magic jhonson', '002', '113', 'bh', '0103'),
         ('13', 'maradona', '003', '114', 'sp', '0104'),
         ('14', 'pele', '004', '115', 'rj', '0105')
         ]

# inserindo os dados da lista na tabela

cursor.executemany("""
INSERT INTO tbl_cliente (id, nome, cpf, telefone, cidade, criado_em)
VALUES (?,?,?,?,?,?)
""", lista)

# Gravar no banco de dados
cnn.commit()

print("Dados inseridos na na tabela com sucesso!")

cnn.close()
