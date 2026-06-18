#include "raylib.h"
#include <stdio.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define MAX_QUESTIONS 5
#define OPTIONS_COUNT 4

typedef struct {
    const char *question;
    const char *options[OPTIONS_COUNT];
    int correctIndex;
} Question;

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Quiz de Matematica - Raylib");

    SetTargetFPS(60);

    Question questions[MAX_QUESTIONS] = {
        {
            "Quanto e 7 x 8?",
            {"A) 54", "B) 56", "C) 64", "D) 48"},
            1
        },
        {
            "Quanto e 15 + 9?",
            {"A) 21", "B) 22", "C) 24", "D) 26"},
            2
        },
        {
            "Quanto e 36 / 6?",
            {"A) 5", "B) 6", "C) 7", "D) 8"},
            1
        },
        {
            "Quanto e 12 - 5?",
            {"A) 6", "B) 7", "C) 8", "D) 9"},
            1
        },
        {
            "Quanto e 9 x 3?",
            {"A) 18", "B) 21", "C) 24", "D) 27"},
            3
        }
    };

    int currentQuestion = 0;
    int score = 0;
    int selectedAnswer = -1;

    bool answered = false;
    bool showFinalScreen = false;

    float feedbackTimer = 0.0f;
    const float feedbackDuration = 1.5f;

    Rectangle optionButtons[OPTIONS_COUNT];

    for (int i = 0; i < OPTIONS_COUNT; i++) {
        optionButtons[i] = (Rectangle){
            180,
            220 + i * 70,
            440,
            50
        };
    }

    while (!WindowShouldClose()) {
        Vector2 mousePos = GetMousePosition();

        if (!showFinalScreen) {
            if (!answered) {
                for (int i = 0; i < OPTIONS_COUNT; i++) {
                    if (CheckCollisionPointRec(mousePos, optionButtons[i]) &&
                        IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                        
                        selectedAnswer = i;
                        answered = true;
                        feedbackTimer = feedbackDuration;

                        if (selectedAnswer == questions[currentQuestion].correctIndex) {
                            score++;
                        }
                    }
                }

                if (IsKeyPressed(KEY_A)) selectedAnswer = 0;
                if (IsKeyPressed(KEY_B)) selectedAnswer = 1;
                if (IsKeyPressed(KEY_C)) selectedAnswer = 2;
                if (IsKeyPressed(KEY_D)) selectedAnswer = 3;

                if (selectedAnswer != -1) {
                    answered = true;
                    feedbackTimer = feedbackDuration;

                    if (selectedAnswer == questions[currentQuestion].correctIndex) {
                        score++;
                    }
                }
            } else {
                feedbackTimer -= GetFrameTime();

                if (feedbackTimer <= 0.0f) {
                    currentQuestion++;
                    selectedAnswer = -1;
                    answered = false;

                    if (currentQuestion >= MAX_QUESTIONS) {
                        showFinalScreen = true;
                    }
                }
            }
        }

        BeginDrawing();

        ClearBackground((Color){245, 248, 255, 255});

        DrawText("Quiz de Matematica", 245, 40, 36, DARKBLUE);

        if (showFinalScreen) {
            DrawText("Fim do Quiz!", 300, 190, 40, DARKGREEN);

            char finalScoreText[64];
            sprintf(finalScoreText, "Pontuacao final: %d de %d", score, MAX_QUESTIONS);
            DrawText(finalScoreText, 250, 260, 28, BLACK);

            DrawText("Pressione ESC para sair", 270, 340, 22, GRAY);
        } else {
            char scoreText[64];
            sprintf(scoreText, "Pontuacao: %d", score);
            DrawText(scoreText, 30, 30, 24, DARKGRAY);

            char questionNumberText[64];
            sprintf(questionNumberText, "Pergunta %d de %d", currentQuestion + 1, MAX_QUESTIONS);
            DrawText(questionNumberText, 580, 30, 22, DARKGRAY);

            DrawText(questions[currentQuestion].question, 180, 130, 30, BLACK);

            for (int i = 0; i < OPTIONS_COUNT; i++) {
                Color buttonColor = WHITE;
                Color borderColor = SKYBLUE;

                if (answered) {
                    if (i == questions[currentQuestion].correctIndex) {
                        buttonColor = (Color){180, 240, 180, 255};
                        borderColor = GREEN;
                    } else if (i == selectedAnswer) {
                        buttonColor = (Color){250, 180, 180, 255};
                        borderColor = RED;
                    }
                } else if (CheckCollisionPointRec(mousePos, optionButtons[i])) {
                    buttonColor = (Color){220, 235, 255, 255};
                }

                DrawRectangleRec(optionButtons[i], buttonColor);
                DrawRectangleLinesEx(optionButtons[i], 3, borderColor);
                DrawText(
                    questions[currentQuestion].options[i],
                    optionButtons[i].x + 20,
                    optionButtons[i].y + 13,
                    24,
                    BLACK
                );
            }

            if (answered) {
                if (selectedAnswer == questions[currentQuestion].correctIndex) {
                    DrawText("Correto!", 335, 520, 34, GREEN);
                } else {
                    DrawText("Errado!", 345, 500, 34, RED);

                    char correctText[128];
                    sprintf(
                        correctText,
                        "Resposta correta: %s",
                        questions[currentQuestion].options[questions[currentQuestion].correctIndex]
                    );

                    DrawText(correctText, 230, 545, 22, DARKGRAY);
                }
            }
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}