##################################################
#
# Projeto de umm e-commerce para Livraria.
# Faculdade: CESMAC;
#
# Professor:
# Autora: Karolyne Camile Batista.
#
# Criado em: 12-12-2020
###################################################
from Front_end import *
#from Back_end import *

# Chamdno funcionalidades
if __name__ == '__main__':
    while True:
        #tela_login_funcionario()

        func = tela_login_funcionario()
        event, values = func.Read()
        print(event, values)

        if event is None or event == 'Cancelar':
            break
        if event == 'Não Possuo cadastro':
            func.hide()
            tela_cadastro_funcionario()
        if event == 'Entrar':
            func.hide()
            #tela_inicial_bookstrore()

            tela_inicial = tela_inicial_bookstrore()
            event, values = tela_inicial.Read()
            print(event, values)
            if event == "Livros":
                Dados_Livro()
                tela_dados_livros = Dados_Livro()
                event, values = tela_dados_livros.Read()
                print(event, values)
                if event == "Cadastrar":
                    tela_cadastro_livro()

