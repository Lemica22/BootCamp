import sqlite3
<<<<<<< HEAD

#def atualiza_banco():


def cadastrar_funcionario_no_banco(lista_dados_funcionario):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_funcionario(codigo_funcionario, nome_funcionario, senha_funcionario,
                                                            endereco_funcionario, telefone_funcionario)
                                         VALUES (?,?,?,?,?)
=======
'''
data_base_livraria = sqlite3.connect('Bookstore.db')
cursor = data_base_livraria.cursor()

cursor.execute("""
CREATE TABLE cadastro_funcionario(
        codigo_funcionario INTERGER NOT NULL PRIMARY KEY AUTOINCREMENT,
        nome_funcionario TEXT NOT NULL,
        senha_funcionario TEXT NOT NULL,
        endereco_funcionario TEXT NOT NULL,
        telefone_funcionario TEXT
);
""")

# Mudar tipos de arquivos. 
cursor.execute("""
CREATE TABLE cadastro_cliente(
        codigo_cliente INTERGER NOT NULL PRIMARY KEY AUTOINCREMENT,
        data_nascimento_cliente DATE NOT NULL,
        nome_cliente TEXT NOT NULL,
        endereco_cliente TEXT NOT NULL,
        email_cliente TEXT NOT NULL,
        telefone_cliente TEXT,
        cpf_cliente TEXT,
        cnpj_cliente TEXT,
        razao_scoial TEXT
);
""")

# terminaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar
cursor.execute("""
CREATE TABLE cadastro_livros(
        codigo_cliente INTERGER NOT NULL PRIMARY KEY AUTOINCREMENT,
        data_nascimento_cliente DATE NOT NULL,
        nome_cliente TEXT NOT NULL,
        endereco_cliente TEXT NOT NULL,
        email_cliente TEXT NOT NULL,
        telefone_cliente TEXT,
        cpf_cliente TEXT,
        cnpj TEXT,
        razao_scoial TEXT
);
""")

def atualiza_banco():

def cadastrar_funcionario_no_banco(lista_dados_funcionario):
    data_base_livraria = sqlite3.connect('Bookstore.db.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_funcionario (nome, idade, cpf, email, fone, cidade, uf, criado_em)
                                         VALUES (?,?,?,?,?,?,?,?)
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
                                       """, lista_dados_funcionario)
    data_base_livraria.commit()
    data_base_livraria.close()

def excluir_funcionario_no_banco(codigo_cliente):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.execute( """DELETE from cadastro_funcionario where codigo_funcionario = ?""", (codigo_cliente,))
    data_base_livraria.commit()
    cursor.close()

def adicionar_clientes(lista_de_informacoes_do_cliente):
<<<<<<< HEAD
    data_base_livraria = sqlite3.connect('Bookstore.db')
=======
    data_base_livraria = sqlite3.connect('Bookstore.db.db')
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_clientes (codigo_cliente, data_nascimento_cliente, nome_cliente,
                                      endereco_cliente, email_cliente, telefone_cliente, cpf_cliente, cnpj_cliente,
                                      razao_scoial)
                                             VALUES (?,?,?,?,?,?,?,?,?)
<<<<<<< HEAD
                                           """, lista_de_informacoes_do_cliente)
=======
                                           """, lista_de_informacoes)
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
    data_base_livraria.commit()
    data_base_livraria.close()

def excluir_cliente(codigo_cliente):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.execute("""DELETE from cadastro_cliente where codigo_cliente = ?""", (codigo_cliente,))
    data_base_livraria.commit()
    cursor.close()

def adicionar_livros(lista_de_informacoes_do_livro):
<<<<<<< HEAD
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_livros_novo (ISBN , codigo_cliente, livro , editora  , autor,  
                                                            ano_publicacao , genero, quantidade , preco)
                                             VALUES (?,?,?,?,?,?,?,?,?)
                                           """, lista_de_informacoes_do_livro)
=======
    data_base_livraria = sqlite3.connect('Bookstore.db.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_clientes (codigo_cliente, data_nascimento_cliente, nome_cliente,
                                      endereco_cliente, email_cliente, telefone_cliente, cpf_cliente, cnpj_cliente,
                                      razao_scoial)
                                             VALUES (?,?,?,?,?,?,?,?,?)
                                           """, lista_de_informacoes)
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
    data_base_livraria.commit()
    data_base_livraria.close()

def excluir_livro(isbn):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
<<<<<<< HEAD
    cursor.execute("""DELETE from cadastro_livros_novo where codigo_livro = ?""", (isbn,))
    data_base_livraria.commit()
    cursor.close()

=======
    cursor.execute("""DELETE from cadastro_cliente where codigo_livro = ?""", (isbn,))
    data_base_livraria.commit()
    cursor.close()

'''
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
