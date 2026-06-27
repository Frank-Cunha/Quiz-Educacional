
<img width="1536" height="1024" alt="banner-mathdf.png" src="https://github.com/user-attachments/assets/a5187ceb-01c9-485e-8b52-ca039d46f816" />

<p align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/LICENSE-MIT-yellow?style=plastic">
<img alt="Static Badge" src="https://img.shields.io/badge/LANGUAGE-C-blue?style=plastic&logo=C&logoColor=blue">
<img alt="Static Badge" src="https://img.shields.io/badge/ENGINE-RAYLIB-violet?style=plastic&logo=raylib&logoColor=white">
<img alt="Static Badge" src="https://img.shields.io/badge/PLATFORM-WINDOWS-darkgreen?style=plastic&logoColor=white">
<img alt="Static Badge" src="https://img.shields.io/badge/GENRE-EDUCATIONAL-lightblue?style=plastic&logoColor=white">
<img alt="Static Badge" src="https://img.shields.io/badge/PLAYABLE-lime?style=plastic&logoColor=white">
</p>


## 📌 Sobre o projeto

O **MathDF** é um sistema de quiz e aprendizado voltado à matemática básica para estudantes do **1º ao 5º ano do Ensino Fundamental** da rede pública do Distrito Federal.

A proposta do projeto é tornar o estudo da matemática mais interativo, acessível e motivador, utilizando quizzes, conteúdos organizados por ano escolar, testes de verificação e recompensas educativas.

---

## 🎯 Objetivo

O objetivo do MathDF é auxiliar estudantes no aprendizado de conteúdos de matemática básica, oferecendo uma plataforma simples, visual e gamificada.

O sistema busca apoiar o desenvolvimento dos alunos por meio de:

- Conteúdos organizados por ano escolar;
- Quizes por tema e dificuldade;
- Testes de verificação;
- Sistema de pontuação;
- Recompensas educativas;
- Acompanhamento de progresso.

---

## 👥 Público-alvo

O projeto é voltado para estudantes da rede pública do Distrito Federal, especialmente alunos dos anos iniciais do Ensino Fundamental:

- 1º ano;
- 2º ano;
- 3º ano;
- 4º ano;
- 5º ano.

---

## 🧠 Conteúdos abordados

O sistema poderá trabalhar com diferentes áreas da matemática básica, como:

- Aritmética básica;
- Adição e subtração;
- Multiplicação e divisão;
- Conjuntos numéricos;
- Sequências numéricas;
- Noções iniciais de álgebra;
- Grandezas e medidas;
- Interpretação de tabelas e gráficos;
- Raciocínio lógico.

---

## 🕹️ Funcionalidades principais

- Cadastro e login de usuários;
- Seleção do ano escolar;
- Organização dos conteúdos por etapa de ensino;
- Leitura de conteúdos matemáticos;
- Testes de verificação com perguntas;
- Quizes por tema;
- Correção automática das respostas;
- Exibição de pontuação;
- Sistema de recompensas;
- Salvamento do progresso do estudante;
- Acompanhamento do desempenho pelos professores.

---

## 🏆 Sistema de recompensas

Para aumentar o engajamento dos estudantes, o MathDF poderá oferecer recompensas como:

- Pontos;
- Estrelas;
- Selos por conteúdo concluído;
- Mensagens de incentivo;

---

## 🛠️ Tecnologias utilizadas



- Linguagem C;
- Raylib;
- VScode e Notepad ++;
- GitHub e GitLab.

---

## 


## 📁 Estrutura do projeto

Exemplo de organização dos arquivos:

```txt
MathDF/
│
├── README.md
├── LICENSE
├── .gitignore
├── Makefile #arquivo responsável por facilitar a compilação e execução do projeto
│
├── assets/
│   ├── images/
│   │   └── banner-mathdf.png
│   └── audio/
│       └── arquivos_de_som.mp3
├── MathDF_game/
│   ├── src/
│   ├── main.c #inicializa a janela, cria o GameState e contorla o loop principal
│   ├── utilidades.c #funcoes auxiliares de texto. memoria, tela cheia e escala proporcional da interface
│   ├── audio.c #responsavel por tocar os efeitos sonoros e audios presentes no sistema
│   ├── questoes.c #gera perguntas conforme o ano e bloco de conteudo 
│   ├── conteudo.c #guarda textos explicativos dos blocos
│   ├── progresso.c #carrega dados para a area do professor responsavel
│   ├── jogo.c #inciar a atividade, responder, calcular resultado e atualizar progesso
│   └── telas_aluno_responsavel.c #desenha todas as telas: login, selecao de ano, conteudo, quiz, resultado e area do responsavel
│
├── include/
│   ├── config.h #guarda constantes do projeto: tamanho da tela, quantidade de questoes, arquivo de progesso e local dos audios do sistema
│   ├── modelos.h #guarda enums e structs principais: GameScreen, UserRole, PlayMode, Question, ContentBlock, StudentProgress, GameAudio e GameState.
│   ├── utilidades.h #funcoes auxiliares de texto, memoria, tela cheia e escala proporcional da interface
│   ├── audio.h #responsavel por tocar os efeitos sonoros e audios presentes no sistema 
│   ├── questoes.h #criacao, randomizacao e liberacao das questoes
│   ├── conteudo.h #cria os 10 blocos de conteudo por ano escolar
│   ├── progresso.h #salva progresso em arquivo texto
│   ├── jogo.h #controla o funcionamento do quiz/teste: iniciar atividade, responder, calcular resultado e atualizar progresso.
│   └── telas_aluno_responsavel.h #desenha todas as telas: login, selecao de ano, blocos, conteudo, quiz, resultado e area do responsavel
│
├── data/ #guarda dados gerados ou usados pelo sistema durante a execução
│    ├── READMEData.md #explica a utilidade da pasta data/
│    ├── .gitkeep
│    └── progresso_quiz_df.txt.example #mostra um modelo de como o arquivo de progresso será salvo
│    └── progresso_quiz_df.txt #arquivo real gerado pelo programa com o progresso dos alunos
└── docs/
    ├── 01_planejamento_produto.md
    ├── 02_elicitacao_5w2h.md
    ├── 03_arquitetura.md
    ├── 04_plano_seguranca.md
    ├── 05_plano_ux_ui.md
    ├── 06_plano_cloud.md
    ├── 07_apresentacao_simulacao.md
    ├── 08_github_gitlab.md
    └── 09_guia_compilacao.md
```

---

## 🔧 Detalhes técnicos





---

## 🚀 Como compilar e rodar







---

## 📋 Documentação
| Documento | Conteúdo |
|----------------|-----------|
| README.md | Visão geral do projeto. |
| docs/ |5W2H, requisitos, público-alvo, stakeholders, custo computacional. |
|MathDF_game/| | Mostra cada parte do MathDF. |
|LICENSE | Licença MIT.|

---
