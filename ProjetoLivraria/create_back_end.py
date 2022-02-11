import sqlite3

data_base_livraria = sqlite3.connect('Bookstore.db')
cursor = data_base_livraria.cursor()

cursor.execute("""
CREATE TABLE cadastro_funcionario(
        codigo_funcionario TEXT,
        nome_funcionario TEXT ,
        senha_funcionario TEXT,
        endereco_funcionario TEXT,
        telefone_funcionario TEXT
);
""")


cursor.execute("""
CREATE TABLE cadastro_cliente(
        codigo_cliente TEXT,
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


cursor.execute("""
CREATE TABLE cadastro_livros_novo(
        ISBN TEXT,
        codigo_cliente TEXT,
        livro TEXT ,
        editora TEXT ,
        autor TEXT ,
        ano_publicacao TEXT,
        genero TEXT,
        quantidade TEXT,
        preco TEXT
);
""")

data_base_livraria.close()