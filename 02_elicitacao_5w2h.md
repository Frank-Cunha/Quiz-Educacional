# Documento de Elicitacao

## 5W2H

| Pergunta | Resposta |
|---|---|
| What? | Um jogo de quiz educacional de matematica basica. |
| Why? | Para apoiar estudantes na pratica de operacoes matematicas de forma interativa. |
| Who? | Estudantes, professores, escolas, pais e equipe de desenvolvimento. |
| Where? | Inicialmente local em computadores; futuramente em servidor escolar ou cloud. |
| When? | MVP em curto prazo; expansoes por fases. |
| How? | Desenvolvimento em C com Raylib, documentacao em GitHub/GitLab e evolucao modular. |
| How much? | Baixo custo computacional no MVP; custo maior apenas em versoes online com usuarios e dados. |

## Publico-Alvo

### Primario

Estudantes do ensino fundamental que estejam praticando:

- Adicao.
- Subtracao.
- Multiplicacao.
- Divisao.
- Raciocinio logico basico.

### Secundario

- Professores que desejam uma atividade complementar.
- Pais ou responsaveis que acompanham estudos em casa.
- Coordenadores pedagogicos interessados em ferramentas digitais simples.

## Stakeholders

| Stakeholder | Interesse |
|---|---|
| Estudante | Aprender e jogar com facilidade |
| Professor | Usar como apoio em sala |
| Escola | Melhorar engajamento pedagogico |
| Pais | Acompanhar pratica e evolucao |
| Desenvolvedor | Manter codigo simples e expansivel |
| Administrador de TI | Hospedar com seguranca e baixo custo |

## Requisitos Funcionais

- O sistema deve exibir perguntas matematicas.
- O sistema deve apresentar quatro alternativas.
- O sistema deve aceitar resposta por clique ou teclado.
- O sistema deve validar a resposta selecionada.
- O sistema deve exibir feedback visual.
- O sistema deve contabilizar pontuacao.
- O sistema deve exibir resultado final.

## Requisitos Nao Funcionais

- Interface simples e legivel.
- Baixo consumo de memoria e processamento.
- Codigo modular.
- Facilidade de compilacao.
- Possibilidade de expansao para cloud.
- Boa legibilidade para manutencao.

## Custo Computacional

### MVP Local

- CPU: muito baixo.
- Memoria: muito baixa.
- Rede: nao utilizada.
- Armazenamento: minimo.
- GPU: uso simples para renderizacao 2D.

### Versao Online

- CPU: baixo a moderado, dependendo do numero de usuarios.
- Memoria: baixa para API simples.
- Rede: necessaria para salvar progresso e carregar perguntas.
- Banco de dados: pequeno no inicio.
- Monitoramento: recomendado para disponibilidade.

## Restricoes

- O MVP deve ser simples para fins educacionais.
- O codigo deve usar a estrutura basica da Raylib.
- O conteudo deve ser adequado ao ensino fundamental.
- A interface deve evitar elementos visuais confusos.
