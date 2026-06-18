# Apresentacao e Simulacao do Jogo

## Roteiro de Apresentacao

### Slide 1 - Titulo

Quiz Educacional de Matematica

Uma proposta de jogo simples para apoiar estudantes do ensino fundamental na pratica de matematica basica.

### Slide 2 - Problema

Estudantes precisam praticar operacoes matematicas, mas atividades repetitivas podem reduzir o engajamento. O jogo transforma a pratica em uma experiencia interativa, rapida e visual.

### Slide 3 - Solucao

Um quiz com perguntas de matematica, quatro alternativas, feedback imediato e pontuacao.

### Slide 4 - Publico-Alvo

- Estudantes do ensino fundamental.
- Professores.
- Escolas.
- Pais ou responsaveis.

### Slide 5 - MVP

- Perguntas fixas.
- Alternativas A, B, C e D.
- Clique ou teclado.
- Feedback de acerto e erro.
- Pontuacao final.

### Slide 6 - Tecnologias

- Linguagem C.
- Biblioteca Raylib.
- Documentacao em Markdown.
- Versionamento em GitHub ou GitLab.

### Slide 7 - Arquitetura

O jogo usa loop principal Raylib, modulo de perguntas, estado do jogo, entrada do usuario, pontuacao e renderizacao.

### Slide 8 - Seguranca

No MVP local, o risco e baixo. Em versao online, serao adotados HTTPS, controle de acesso, protecao de dados, backups e monitoramento.

### Slide 9 - Cloud

A versao cloud pode incluir API, banco de dados, autenticacao, armazenamento de assets e monitoramento.

### Slide 10 - Proximos Passos

- Sistema de niveis.
- Cronometro.
- Relatorios para professores.
- Ranking.
- Conteudo personalizado por turma.

## Simulacao do Jogo

### Tela Inicial do Quiz

```text
--------------------------------------------------
 Quiz de Matematica                 Pontuacao: 0
 Pergunta 1 de 5

 Quanto e 7 x 8?

 [ A) 54 ]
 [ B) 56 ]
 [ C) 64 ]
 [ D) 48 ]
--------------------------------------------------
```

### Usuario escolhe B

```text
--------------------------------------------------
 Quiz de Matematica                 Pontuacao: 1
 Pergunta 1 de 5

 Quanto e 7 x 8?

 [ A) 54 ]
 [ B) 56 ]  <- verde
 [ C) 64 ]
 [ D) 48 ]

 Correto!
--------------------------------------------------
```

### Proxima Pergunta

```text
--------------------------------------------------
 Quiz de Matematica                 Pontuacao: 1
 Pergunta 2 de 5

 Quanto e 15 + 9?

 [ A) 21 ]
 [ B) 22 ]
 [ C) 24 ]
 [ D) 26 ]
--------------------------------------------------
```

### Usuario escolhe A

```text
--------------------------------------------------
 Quiz de Matematica                 Pontuacao: 1
 Pergunta 2 de 5

 Quanto e 15 + 9?

 [ A) 21 ]  <- vermelho
 [ B) 22 ]
 [ C) 24 ]  <- verde
 [ D) 26 ]

 Errado!
 Resposta correta: C) 24
--------------------------------------------------
```

### Tela Final

```text
--------------------------------------------------
 Fim do Quiz!

 Pontuacao final: 4 de 5

 Voce concluiu o desafio.
--------------------------------------------------
```

## Fala Sugerida para Demonstracao

Este jogo foi pensado para estudantes do ensino fundamental praticarem matematica basica de forma simples. A cada pergunta, o aluno escolhe uma alternativa. O jogo mostra imediatamente se a resposta esta correta e atualiza a pontuacao. Quando ha erro, a resposta correta e exibida, transformando o erro em oportunidade de aprendizagem.
