import PySimpleGUI as sg
from Back_end import *

def tela_login_funcionario():
    sg.change_look_and_feel('Purple')
    layout_tela_login = (
        [sg.Image(r'imagem_livraria.png')],
        [sg.Text('Senha:', size=(10, 0)), sg.Input(size=(15, 0), key='senha')],
        [sg.Text('Usuário:', size=(10, 0)), sg.Input(size=(15, 0), key='usuario')],
        [sg.Button("Entrar"), sg.Button("Cancelar"), sg.Button("Não Possuo cadastro")]

    )
    janela_tela_login = sg.Window("Login De Funcionário", layout_tela_login, resizable=True)
    button, cont_tela_login = janela_tela_login.Read()
    return janela_tela_login

def tela_cadastro_funcionario():
    sg.change_look_and_feel('Purple')
    layout_tela_cadastro_funcionario = [
        [sg.Text('codigo',   size=(10, 0)), sg.Input(size=(10, 0), key='codigo')],
        [sg.Text('nome',     size=(10, 0)), sg.Input(size=(10, 0), key='nome')],
        [sg.Text('senha',    size=(10, 0)), sg.Input(size=(10, 0), key='senha')],
        [sg.Text('endereco', size=(10, 0)), sg.Input(size=(10, 0), key='endereco')],
        [sg.Text('telefone', size=(10, 0)), sg.Input(size=(20, 0), key='telefone')],
        [sg.Button("Confirmar seus dados"), sg.Button("Voltar")]
    ]
    janela_tela_cadastro_funcionario = sg.Window("Cadastro de Funcionários", layout_tela_cadastro_funcionario)
    button, cont_tela_cadastro_funcionario = janela_tela_cadastro_funcionario.Read()
<<<<<<< HEAD
    lista_atributos_funcionarios = [(cont_tela_cadastro_funcionario['codigo'], cont_tela_cadastro_funcionario['nome'],
                                    cont_tela_cadastro_funcionario['senha'], cont_tela_cadastro_funcionario['endereco'],
                                    cont_tela_cadastro_funcionario['telefone'])]

    cadastrar_funcionario_no_banco(lista_atributos_funcionarios)
=======
    lista_atributos_funcionarios = (cont_tela_cadastro_funcionario['codigo'], cont_tela_cadastro_funcionario['nome'],
                                    cont_tela_cadastro_funcionario['senha'], cont_tela_cadastro_funcionario['endereco'],
                                    cont_tela_cadastro_funcionario['telefone'])
    #cadastrar_funcionario_no_banco(lista_atributos_funcionarios)
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
    return janela_tela_cadastro_funcionario

def tela_inicial_bookstrore():
    sg.change_look_and_feel('Purple')
    layout_tela_inicial = [
        [sg.Text("Bem vindo à Karolyne's Bookstore")],
<<<<<<< HEAD
        [sg.Button("Funcionário"), sg.Button("Clientes"), sg.Button("Relatório de estoque"), sg.Button("Livros"), sg.Button("Vendas"), sg.Button("Sair")]
    ]

    janela_tela_inicial_bookstore = sg.Window("Bookstore").layout(layout_tela_inicial)
    button, cont_tela_inicial = janela_tela_inicial_bookstore.Read()
=======
        [sg.Button("Funcionário"), sg.Button("Clientes"), sg.Button("Relatório de estoque")],
        [sg.Button("Livros"), sg.Button("Vendas"), sg.Button("Sair")]
    ]

    janela_tela_inicial_bookstore = sg.Window("Bookstore").layout(layout_tela_inicial)
    button, cont_tela_inicial = janela_tela_inicial.Read()
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
    return janela_tela_inicial_bookstore

def Dados_Clientes():
    sg.change_look_and_feel('Purple')
    layout_tela_Dados_Cliente =[
    [sg.Button("Cadastrar")],
    [sg.Button("Consultar")],
    [sg.Button("Editar")],
    [sg.Button("Remover")]
    ]
    janela_Dados_Clientes = sg.Window("Dados dos Clientes").layout(layout_tela_Dados_Cliente)
    button, cont_tela_inicial = janela_Dados_Clientes.Read()
<<<<<<< HEAD
    return janela_Dados_Clientes
=======
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria

def Dados_Funcionarios():
    sg.change_look_and_feel('Purple')
    layout_tela_Dados_Funcionarios =[
    [sg.Button("Consultar")],
    [sg.Button("Editar")],
    [sg.Button("Remover")]
    ]
    janela_Dados_Funcionarios = sg.Window("Dados dos Funcionários").layout(layout_tela_Dados_Funcionarios)
    button, cont_tela_Funcionarios = janela_Dados_Funcionarios.Read()


def Dados_Livro():
    sg.change_look_and_feel('Purple')
    layout_tela_Dados_Livros =[
    [sg.Button("Cadastrar")],
    [sg.Button("Consultar")],
    [sg.Button("Editar")],
    [sg.Button("Remover")]
    ]
    janela_Dados_Livros = sg.Window("Dados dos Produtos").layout(layout_tela_Dados_Livros)
    button, cont_tela_Dados_Livros = janela_Dados_Livros.Read()
<<<<<<< HEAD
    return janela_Dados_Livros
=======
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria

def tela_cadastro_cliente():
    sg.change_look_and_feel('Purple')
    layout_tela_cadastro_cliente = [
        [sg.Text('codigo', size=(10, 0)), sg.Input(size=(10, 0), key='codigo')],
        [sg.Text('nome', size=(10, 0)), sg.Input(size=(10, 0), key='nome')],
        [sg.Text('senha', size=(10, 0)), sg.Input(size=(10, 0), key='senha')]
        [sg.Text('endereco', size=(10, 0)), sg.Input(size=(10, 0), key='endereco')],
        [sg.Text('telefone', size=(10, 0)), sg.Input(size=(20, 0), key='telefonefone')],
        [sg.Text('email', size=(10, 0)), sg.Input(size=(20, 0), key='email')],
        [sg.Text("Qual tipo de cliente")],
        [sg.Checkbox("Pessoa Fisica", key='CPF'), sg.Checkbox("Pessoa Juridica", key='CNPJ')],
        [sg.Text('Razao Social', size=(10, 0)), sg.Input(size=(20, 0), key='RazaoSocial')],
        [sg.Button("Confirmar seus dados"), sg.Button("Voltar")]
    ]
    janela_tela_cadastro_cliente = sg.Window("Cadastro dos Clientes").layout(layout_tela_cadastro_cliente)
    button, cont_tela_cadastro = janela_tela_cadastro_cliente.Read()
<<<<<<< HEAD
    return janela_tela_cadastro_cliente
=======
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria

def tela_cadastro_livro():
    sg.change_look_and_feel('Purple')
    layout_tela_cadastro_livro = [
<<<<<<< HEAD
        [sg.Text('ISBN:', size=(10, 0)), sg.Input(size=(10, 0), key='ISBN')],
        [sg.Text('codigo_cliente:', size=(10, 0)), sg.Input(size=(5, 0), key='codigo_cliente')],
        [sg.Text('livro:', size=(10, 0)), sg.Input(size=(15, 0), key='livro')],
        [sg.Text('editora:', size=(10, 0)), sg.Input(size=(20, 0), key='editora')],
        [sg.Text('autor:', size=(10, 0)), sg.Input(size=(20, 0), key='autor')],
        [sg.Text('ano de publicação do livro:', size=(10, 0)), sg.Input(size=(20, 0), key='ano_publicacao')],
        [sg.Text('Gênero:', size=(10, 0)), sg.Input(size=(20, 0), key='genero')],
        [sg.Text("Qual a origem do livro?")],
        [sg.Checkbox("Nacional", key='nacional'), sg.Checkbox("Importados", key='importados')],
        [sg.Text('quantidade:', size=(10, 0)), sg.Input(size=(10, 0), key='quantidade')],
        [sg.Text('preco:', size=(10, 0)), sg.Input(size=(20, 0), key='preco')],
=======
        [sg.Text('ISBN:', size=(10, 0)), sg.Input(size=(10, 0), key='isbn')],
        [sg.Text('Código do Cliente:', size=(10, 0)), sg.Input(size=(5, 0), key='codigo_cliente')],
        [sg.Text('Livro:', size=(10, 0)), sg.Input(size=(15, 0), key='livro')],
        [sg.Text('Editora:', size=(10, 0)), sg.Input(size=(20, 0), key='editora')],
        [sg.Text('Autor:', size=(10, 0)), sg.Input(size=(20, 0), key='autor')],
        [sg.Text('Ano de publicação do livro:', size=(10, 0)), sg.Input(size=(20, 0), key='ano_publicacao')],
        [sg.Text('Gênero:', size=(10, 0)), sg.Input(size=(20, 0), key='genero')],
        [sg.Text("Qual a origem do livro?")],
        [sg.Checkbox("Nacional", key='nacional'), sg.Checkbox("Importados", key='importados')],
        [sg.Text('Quantidade:', size=(10, 0)), sg.Input(size=(10, 0), key='qtd_livro')],
        [sg.Text('Preço:', size=(10, 0)), sg.Input(size=(20, 0), key='preco')],
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria

        [sg.Button("Cadastrar o livro"), sg.Button("Voltar")]

    ]
<<<<<<< HEAD

    janela_tela_cadastro_livro = sg.Window("Cadastro de Livros").layout(layout_tela_cadastro_livro)
    button, conteudo_da_tela = janela_tela_cadastro_livro.Read()
    lista_atributos_livro = [(conteudo_da_tela['ISBN'], conteudo_da_tela['codigo_cliente'], conteudo_da_tela['livro'],
                             conteudo_da_tela['editora'], conteudo_da_tela['autor'], conteudo_da_tela['ano_publicacao'],
                              conteudo_da_tela['genero'], conteudo_da_tela['quantidade'], conteudo_da_tela['preco'])]

    adicionar_livros(lista_atributos_livro)
    return janela_tela_cadastro_livro
=======
    janela_tela_cadastro_livro = sg.Window("Cadastro de Livros").layout(layout_tela_cadastro_livro)
    button, conteudo_da_tela = janela_tela_cadastro_livro.Read()
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria

def tela_exibir_livros():
    layout_tela_exibir_livros =[
    [sg.Button("Voltar"), sg.Button("Avancar")]

    ]
    janela_tela_exibir_livros = sg.Window("Livros").layout(layout_tela_exibir_livros)
<<<<<<< HEAD
    button, cont_tela_exibir_livros = janela_tela_exibir_livros.Read()
    return janela_tela_exibir_livros
=======
    button, cont_tela_exibir_livros = janela_tela_exibir_livros.Read()
>>>>>>> 5bedf35... Adicinando arquivos do projeto de livraria
