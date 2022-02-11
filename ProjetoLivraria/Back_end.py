import sqlite3

#def atualiza_banco():


def cadastrar_funcionario_no_banco(lista_dados_funcionario):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_funcionario(codigo_funcionario, nome_funcionario, senha_funcionario,
                                                            endereco_funcionario, telefone_funcionario)
                                         VALUES (?,?,?,?,?)
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
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_clientes (codigo_cliente, data_nascimento_cliente, nome_cliente,
                                      endereco_cliente, email_cliente, telefone_cliente, cpf_cliente, cnpj_cliente,
                                      razao_scoial)
                                             VALUES (?,?,?,?,?,?,?,?,?)
                                           """, lista_de_informacoes_do_cliente)
    data_base_livraria.commit()
    data_base_livraria.close()

def excluir_cliente(codigo_cliente):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.execute("""DELETE from cadastro_cliente where codigo_cliente = ?""", (codigo_cliente,))
    data_base_livraria.commit()
    cursor.close()

def adicionar_livros(lista_de_informacoes_do_livro):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.executemany("""INSERT INTO cadastro_livros_novo (ISBN , codigo_cliente, livro , editora  , autor,  
                                                            ano_publicacao , genero, quantidade , preco)
                                             VALUES (?,?,?,?,?,?,?,?,?)
                                           """, lista_de_informacoes_do_livro)
    data_base_livraria.commit()
    data_base_livraria.close()

def excluir_livro(isbn):
    data_base_livraria = sqlite3.connect('Bookstore.db')
    cursor = data_base_livraria.cursor()
    cursor.execute("""DELETE from cadastro_livros_novo where codigo_livro = ?""", (isbn,))
    data_base_livraria.commit()
    cursor.close()

