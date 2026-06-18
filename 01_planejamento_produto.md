# Planejamento de Product Management

## Visao do Produto

O produto e um jogo de quiz educacional de matematica basica voltado a estudantes do ensino fundamental. A proposta e apoiar a pratica de calculos simples por meio de uma experiencia curta, visualmente amigavel e com feedback imediato.

## Problema

Estudantes do ensino fundamental muitas vezes precisam praticar operacoes basicas de forma repetida, mas atividades tradicionais podem parecer pouco motivadoras. O jogo busca transformar essa pratica em uma experiencia leve, interativa e pedagogica.

## Objetivos

- Reforcar habilidades de matematica basica.
- Tornar a pratica mais engajante.
- Oferecer feedback imediato ao estudante.
- Permitir expansao futura para niveis de dificuldade e acompanhamento de desempenho.

## Publico-Alvo

- Estudantes do ensino fundamental, especialmente entre 7 e 12 anos.
- Professores de matematica.
- Escolas que desejam atividades digitais simples.
- Pais ou responsaveis que buscam reforco escolar.

## Proposta de Valor

Um jogo simples, rapido e acessivel para praticar matematica basica com feedback visual claro, pontuacao e possibilidade de evolucao pedagogica.

## MVP

O produto minimo viavel deve conter:

- Tela principal do quiz.
- Lista fixa de perguntas.
- Quatro alternativas por pergunta.
- Validacao de resposta.
- Feedback visual.
- Pontuacao.
- Tela final com resultado.

## Backlog Inicial

| Prioridade | Item | Descricao |
|---|---|---|
| Alta | Quiz basico | Exibir pergunta e alternativas |
| Alta | Validacao | Identificar resposta correta ou incorreta |
| Alta | Pontuacao | Somar acertos |
| Alta | Feedback visual | Mostrar cores e mensagens de resultado |
| Media | Tela final | Exibir pontuacao final |
| Media | Teclado | Permitir resposta com A, B, C, D |
| Media | Dificuldade | Separar perguntas por nivel |
| Baixa | Cronometro | Limitar tempo por pergunta |
| Baixa | Ranking | Salvar melhores pontuacoes |

## Roadmap

### Fase 1 - MVP Local

- Implementar o jogo em C com Raylib.
- Usar perguntas fixas em memoria.
- Executar localmente em computador.

### Fase 2 - Conteudo e Dificuldade

- Criar banco de perguntas por nivel.
- Adicionar cronometro opcional.
- Melhorar feedback pedagogico mostrando resposta correta.

### Fase 3 - Produto Escolar

- Adicionar perfis de aluno e professor.
- Salvar pontuacao.
- Gerar relatorio simples.

### Fase 4 - Versao Online

- Publicar em servidor.
- Integrar API para perguntas, usuarios e resultados.
- Implementar seguranca, monitoramento e backups.

## Indicadores de Sucesso

- Taxa de conclusao do quiz.
- Numero medio de acertos por tentativa.
- Tempo medio por pergunta.
- Frequencia de uso.
- Evolucao do estudante ao longo das tentativas.
