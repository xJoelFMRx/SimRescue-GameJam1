#include "iostream"
#include "string"
#include "Matrices.h"

using namespace System;
using namespace std;

void iniciar() {
    srand(time(nullptr));
    Console::SetWindowSize(160, 40);
}

bool verificarUsado(int arreglo[], int size, int numero) {
    for (int i = 0; i < size; i++) {
        if (arreglo[i] == numero) {
            return true;
        }
    }
    return false;
}

int aleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

float aleatorioDecimal(float min, float max) {
    return min + static_cast<float>(rand()) / static_cast<float>(RAND_MAX) * (max - min);
}

void cursor(int x, int y) {
    Console::CursorVisible = false;
    Console::SetCursorPosition(x, y);
}

void color_console(int n) {
    switch (n) {
    case 1: Console::BackgroundColor = ConsoleColor::Black; break;
    case 2: Console::BackgroundColor = ConsoleColor::Blue; break;
    case 3: Console::BackgroundColor = ConsoleColor::Cyan; break;
    case 4: Console::BackgroundColor = ConsoleColor::DarkBlue; break;
    case 5: Console::BackgroundColor = ConsoleColor::DarkCyan; break;
    case 6: Console::BackgroundColor = ConsoleColor::DarkGray; break;
    case 7: Console::BackgroundColor = ConsoleColor::DarkGreen; break;
    case 8: Console::BackgroundColor = ConsoleColor::DarkMagenta; break;
    case 9: Console::BackgroundColor = ConsoleColor::DarkRed; break;
    case 10: Console::BackgroundColor = ConsoleColor::DarkYellow; break;
    case 11: Console::BackgroundColor = ConsoleColor::Gray; break;
    case 12: Console::BackgroundColor = ConsoleColor::Green; break;
    case 13: Console::BackgroundColor = ConsoleColor::Magenta; break;
    case 14: Console::BackgroundColor = ConsoleColor::Red; break;
    case 15: Console::BackgroundColor = ConsoleColor::White; break;
    case 16: Console::BackgroundColor = ConsoleColor::Yellow; break;
    }
}

void color_text(int n) {
    switch (n) {
    case 1: Console::ForegroundColor = ConsoleColor::Black; break;
    case 2: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 3: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 4: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    case 5: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    case 6: Console::ForegroundColor = ConsoleColor::DarkGray; break;
    case 7: Console::ForegroundColor = ConsoleColor::DarkGreen; break;
    case 8: Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 9: Console::ForegroundColor = ConsoleColor::DarkRed; break;
    case 10: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 11: Console::ForegroundColor = ConsoleColor::Gray; break;
    case 12: Console::ForegroundColor = ConsoleColor::Green; break;
    case 13: Console::ForegroundColor = ConsoleColor::Magenta; break;
    case 14: Console::ForegroundColor = ConsoleColor::Red; break;
    case 15: Console::ForegroundColor = ConsoleColor::White; break;
    case 16: Console::ForegroundColor = ConsoleColor::Yellow; break;
    }
}

void dibujarPersonaje(int x, int y, int color) {
    color_text(color);
    cursor(x, y);
    cout << " 0";
    cursor(x, y + 1);
    cout << "/|\\";
    cursor(x, y + 2);
    cout << "/ \\";
    color_text(15);
}

void borrarPersonaje(int x, int y) {
    cursor(x, y);
    cout << "  ";
    cursor(x, y + 1);
    cout << "   ";
    cursor(x, y + 2);
    cout << "   ";
}

void dibujarHelicopter(float x, float y, int color, int seleccion, float direccion /*1 DERECHA - -1 IZQUIERDA*/) {
    color_text(color);
    switch (seleccion) {
    case 1:
        if (direccion == 1) {
            cursor(x, y);
            cout << "           .--,";
            cursor(x, y + 1);
            cout << "         _/_  /";
            cursor(x, y + 2);
            cout << "/'._____/_|_\\/__";
            cursor(x, y + 3);
            cout << "   )_____.--.___)-";
            cursor(x, y + 4);
            cout << "      /   /";
            cursor(x, y + 5);
            cout << "     /   /";
            cursor(x, y + 6);
            cout << "     `--'";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "  ,--.";
            cursor(x, y + 1);
            cout << "  \\  _\\_";
            cursor(x, y + 2);
            cout << "  _\\/_|_\\____.'\\";
            cursor(x, y + 3);
            cout << "-(___.--._____(";
            cursor(x, y + 4);
            cout << "     \\   \\";
            cursor(x, y + 5);
            cout << "      \\   \\";
            cursor(x, y + 6);
            cout << "       `--'";
        }
        break;
    case 2:
        if (direccion == 1) {
            cursor(x, y);
            cout << "   _      ____";
            cursor(x, y + 1);
            cout << "  |_\\___o_/_/_ |";
            cursor(x, y + 2);
            cout << ">-----__\\_\\___]>";
            cursor(x, y + 3);
            cout << "           'o  |";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "      ____   	    ";
            cursor(x, y + 1);
            cout << "   | __\\_\\_o____/ _|";
            cursor(x, y + 2);
            cout << "   <[___\\_\\_-----<";
            cursor(x, y + 3);
            cout << "   |  o'";
        }
        break;
    case 3:
        if (direccion == 1) {
            cursor(x, y);
            cout << "    _________";
            cursor(x, y + 1);
            cout << " ()____.-'-,";
            cursor(x, y + 2);
            cout << "  '''--.____)";
            cursor(x, y + 3);
            cout << "      -'--'-";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "   _________";
            cursor(x, y + 1);
            cout << "    ,-'-.____()";
            cursor(x, y + 2);
            cout << "   (____.--'''";
            cursor(x, y + 3);
            cout << "   -'--'-";
        }
        break;
    case 4:
        if (direccion == 1)
        {
            cursor(x, y);
            cout << "---.      _";
            cursor(x, y + 1);
            cout << "   \@'--__| \_________";
            cursor(x, y + 2);
            cout << "      - ~-===__|__/__)";
        }
        else if (direccion == -1)
        {
            cursor(x, y);
            cout << "           _      .---";
            cursor(x, y + 1);
            cout << " _________/ |__--'@/";
            cursor(x, y + 2);
            cout << "(__/__|__===-~ -";
        }
        break;
    case 5:
        if (direccion == 1) {
            cursor(x, y);
            cout << "             __";
            cursor(x, y + 1);
            cout << "  _ _      /  /";
            cursor(x, y + 2);
            cout << " / \\/_ ___/**/";
            cursor(x, y + 3);
            cout << "/_/^^+*#####*X";
            cursor(x, y + 4);
            cout << "        /  /\\o";
            cursor(x, y + 5);
            cout << "       /__/";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << " __";
            cursor(x, y + 1);
            cout << "\\  \\     _ _";
            cursor(x, y + 2);
            cout << " \\**\\ ___\\/ \\";
            cursor(x, y + 3);
            cout << " X*#####*+^^\\_\\";
            cursor(x, y + 4);
            cout << "   o/\\  \\";
            cursor(x, y + 5);
            cout << "     \\__\\";
        }
        break;
    case 6:
        if (direccion == 1) {
            cursor(x, y);
            cout << " ___";
            cursor(x, y + 1);
            cout << "  |_";
            cursor(x, y + 2);
            cout << "\\_/ \\";
            cursor(x, y + 3);
            cout << "  \\_/";
            cursor(x, y + 4);
            cout << "  / \\";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << " ___";
            cursor(x, y + 1);
            cout << " _|";
            cursor(x, y + 2);
            cout << "/ \\_/";
            cursor(x, y + 3);
            cout << "\\_/";
            cursor(x, y + 4);
            cout << "/ \\";
        }
        break;
    case 7:
        if (direccion == 1) {
            cursor(x, y);
            cout << "____________";
            cursor(x, y + 1);
            cout << "        _I_";
            cursor(x, y + 2);
            cout << " O-----(__o)";
            cursor(x, y + 3);
            cout << "        \\_\\__";

        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "____________";
            cursor(x, y + 1);
            cout << "   _I_";
            cursor(x, y + 2);
            cout << "  (o__)-----O";
            cursor(x, y + 3);
            cout << " __/_/";
        }
        break;
    case 8:
        if (direccion == 1) {
            cursor(x, y);
            cout << "   -----|-----";
            cursor(x, y + 1);
            cout << "*>=====[_]L)";
            cursor(x, y + 2);
            cout << "      -'-`-";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "-----|-----";
            cursor(x, y + 1);
            cout << "(L[_]=====<*";
            cursor(x, y + 2);
            cout << "  `-`-'     ";
        }
        break;
    }
    color_text(15);
}

void borrarHelicoptero(float x, float y, int seleccion, float direccion) {
    switch (seleccion) {
    case 1:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                   ";
            cursor(x, y + 1);
            cout << "                   ";
            cursor(x, y + 2);
            cout << "                   ";
            cursor(x, y + 3);
            cout << "                   ";
            cursor(x, y + 4);
            cout << "                   ";
            cursor(x, y + 5);
            cout << "                   ";
            cursor(x, y + 6);
            cout << "                   ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                   ";
            cursor(x, y + 1);
            cout << "                   ";
            cursor(x, y + 2);
            cout << "                   ";
            cursor(x, y + 3);
            cout << "                   ";
            cursor(x, y + 4);
            cout << "                   ";
            cursor(x, y + 5);
            cout << "                   ";
            cursor(x, y + 6);
            cout << "                   ";
        }
        break;
    case 2:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                           ";
            cursor(x, y + 1);
            cout << "                           ";
            cursor(x, y + 2);
            cout << "                           ";
            cursor(x, y + 3);
            cout << "                           ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                              ";
            cursor(x, y + 1);
            cout << "                              ";
            cursor(x, y + 2);
            cout << "                              ";
            cursor(x, y + 3);
            cout << "                              ";
        }
        break;
    case 3:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                 ";
            cursor(x, y + 1);
            cout << "                 ";
            cursor(x, y + 2);
            cout << "                 ";
            cursor(x, y + 3);
            cout << "                 ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                 ";
            cursor(x, y + 1);
            cout << "                 ";
            cursor(x, y + 2);
            cout << "                 ";
            cursor(x, y + 3);
            cout << "                 ";
        }
        break;
    case 4:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                          ";
            cursor(x, y + 1);
            cout << "                          ";
            cursor(x, y + 2);
            cout << "                          ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                          ";
            cursor(x, y + 1);
            cout << "                          ";
            cursor(x, y + 2);
            cout << "                          ";
        }
        break;
    case 5:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                          ";
            cursor(x, y + 1);
            cout << "                          ";
            cursor(x, y + 2);
            cout << "                          ";
            cursor(x, y + 3);
            cout << "                          ";
            cursor(x, y + 4);
            cout << "                          ";
            cursor(x, y + 5);
            cout << "                          ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                          ";
            cursor(x, y + 1);
            cout << "                          ";
            cursor(x, y + 2);
            cout << "                          ";
            cursor(x, y + 3);
            cout << "                          ";
            cursor(x, y + 4);
            cout << "                          ";
            cursor(x, y + 5);
            cout << "                          ";
        }
        break;
    case 6:
        if (direccion == 1) {
            cursor(x, y);
            cout << "     ";
            cursor(x, y + 1);
            cout << "     ";
            cursor(x, y + 2);
            cout << "     ";
            cursor(x, y + 3);
            cout << "     ";
            cursor(x, y + 4);
            cout << "     ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "     ";
            cursor(x, y + 1);
            cout << "     ";
            cursor(x, y + 2);
            cout << "     ";
            cursor(x, y + 3);
            cout << "     ";
            cursor(x, y + 4);
            cout << "     ";
        }
        break;
    case 7:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                 ";
            cursor(x, y + 1);
            cout << "                 ";
            cursor(x, y + 2);
            cout << "                 ";
            cursor(x, y + 3);
            cout << "                 ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                 ";
            cursor(x, y + 1);
            cout << "                 ";
            cursor(x, y + 2);
            cout << "                 ";
            cursor(x, y + 3);
            cout << "                 ";
        }
        break;
    case 8:
        if (direccion == 1) {
            cursor(x, y);
            cout << "                 ";
            cursor(x, y + 1);
            cout << "                 ";
            cursor(x, y + 2);
            cout << "                 ";
        }
        else if (direccion == -1) {
            cursor(x, y);
            cout << "                 ";
            cursor(x, y + 1);
            cout << "                 ";
            cursor(x, y + 2);
            cout << "                 ";
        }
        break;
    }
}

struct Personaje {
    int x, y;
    int color;
    bool rescatado;
    bool zonaSegura;

    void imprimir() {
        if (!rescatado) {
            dibujarPersonaje(x, y, color);
        }
    }

    void borrar() {
        borrarPersonaje(x, y);
    }
};

struct Vehiculo {
    float x, y;
    float dx;
    int color;
    int modelo;
    float velocidad;
    int habitantesRescatados;
    bool traeHabitante;
    bool llegoAZona;

    void borrar() {
        borrarHelicoptero(x, y, modelo, dx);
    }

    void mover() {
        x += velocidad * dx;
    }

    void imprimir() {
        dibujarHelicopter(x, y, color, modelo, dx);
    }

    string nombre_modelo() {
        string mod = "";

        switch (modelo) {
        case 1:
            mod = "Skyhawk";
            break;
        case 2:
            mod = "Falcon";
            break;
        case 3:
            mod = "Shadow";
            break;
        case 4:
            mod = "Thunderbird";
            break;
        case 5:
            mod = "Eagle";
            break;
        case 6:
            mod = "Guardian";
            break;
        case 7:
            mod = "Valkyrie";
            break;
        case 8:
            mod = "Spylot";
            break;
        }

        return mod;
    }
};

struct Rescate {
    int segundos;
    time_t tiempo_inicio;
    time_t tiempo_actual;
    int transcurrido;
    int faltante;
    bool pausado;

    // Función para iniciar el temporizador
    void iniciar() {
        tiempo_inicio = time(nullptr);
        tiempo_actual = tiempo_inicio;
        transcurrido = 0;
        faltante = segundos;
    }

    void pausar() {
        pausado = true;
    }

    // Función para reanudar el temporizador
    void reanudar() {
        pausado = false;
    }

    // Función para actualizar el tiempo transcurrido y faltante
    void actualizar() {
        if (!pausado) { // Solo actualiza si no está pausado
            tiempo_actual = time(nullptr);
            transcurrido = difftime(tiempo_actual, tiempo_inicio);
            faltante = segundos - transcurrido;
        }
    }
};

struct Ranking {
    int modelo;
    int habitantesRescatados;

    string nombre_modelo() {
        string mod = "";

        switch (modelo) {
        case 1:
            mod = "Skyhawk";
            break;
        case 2:
            mod = "Falcon";
            break;
        case 3:
            mod = "Shadow";
            break;
        case 4:
            mod = "Thunderbird";
            break;
        case 5:
            mod = "Eagle";
            break;
        case 6:
            mod = "Guardian";
            break;
        case 7:
            mod = "Valkyrie";
            break;
        case 8:
            mod = "Spylot";
            break;
        }

        return mod;
    }
};

Personaje* traerHabitantes() {
    Personaje* habitantes = new Personaje[10];
    int colores_usados[10] = { 0 }; // Almacenar los colores usados
    int num_colores_usados = 0; // CONTADOR DE COLORES USADOS

    /*LIMTIES X=70 X=82 - Y=5 Y=31*/
    //TODOS LOS HABITANTES
    habitantes[0].x = 72;
    habitantes[0].y = 5;

    habitantes[1].x = 78;
    habitantes[1].y = 8;

    habitantes[2].x = 69;
    habitantes[2].y = 10;

    habitantes[3].x = 80;
    habitantes[3].y = 13;

    habitantes[4].x = 74;
    habitantes[4].y = 15;

    habitantes[5].x = 78;
    habitantes[5].y = 22;

    habitantes[6].x = 70;
    habitantes[6].y = 23;

    habitantes[7].x = 73;
    habitantes[7].y = 27;

    habitantes[8].x = 82;
    habitantes[8].y = 26;

    habitantes[9].x = 79;
    habitantes[9].y = 31;

    for (int i = 0; i < 10; i++) {
        habitantes[i].color = aleatorio(2, 16);
        habitantes[i].rescatado = false;
        habitantes[i].zonaSegura = false;
    }

    for (int i = 0; i < 10; i++) {
        int color;
        do {
            color = aleatorio(2, 16);
        } while (verificarUsado(colores_usados, num_colores_usados, color));

        habitantes[i].color = color;
        colores_usados[num_colores_usados] = color;
        num_colores_usados++;
    }

    return habitantes;
}

Vehiculo* traerHelicopteros() {
    Vehiculo* helicopter = new Vehiculo[3];
    int modelos_usados[3] = { 0 }; // Almacenar los modelos usados
    int num_modelos_usados = 0; // CONTADOR DE MODELOS USADOS

    int colores_usados[3] = { 0 }; // Almacenar los colores usados
    int num_colores_usados = 0; // CONTADOR DE COLORES USADOS

    helicopter[0].x = 1;
    helicopter[0].y = 3;

    helicopter[1].x = 1;
    helicopter[1].y = 14;

    helicopter[2].x = 1;
    helicopter[2].y = 25;

    for (int i = 0; i < 3; i++) {
        helicopter[i].dx = 1;
        helicopter[i].velocidad = aleatorioDecimal(0.1, 1);
        helicopter[i].traeHabitante = false;
        helicopter[i].habitantesRescatados = 0;
        helicopter[i].llegoAZona = false;
    }

    for (int i = 0; i < 3; i++) {
        int modelo;
        do {
            modelo = aleatorio(1, 8);
        } while (verificarUsado(modelos_usados, num_modelos_usados, modelo));

        helicopter[i].modelo = modelo;
        modelos_usados[num_modelos_usados] = modelo;
        num_modelos_usados++;
    }

    for (int i = 0; i < 3; i++) {
        int color;
        do {
            color = aleatorio(2, 16);
        } while (verificarUsado(colores_usados, num_colores_usados, color));

        helicopter[i].color = color;
        colores_usados[num_colores_usados] = color;
        num_colores_usados++;
    }

    return helicopter;
}

Rescate* traerRescate() {
    Rescate* rescate = new Rescate;

    rescate->segundos = aleatorio(60, 120);
    rescate->pausado = false;

    return rescate;
}

void ordenarBurbuja(Ranking* ranking, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (ranking[j].habitantesRescatados < ranking[j + 1].habitantesRescatados) {
                Ranking temp = ranking[j];
                ranking[j] = ranking[j + 1];
                ranking[j + 1] = temp;
            }
        }
    }
}

void mostrarRanking(Ranking* ranking, int size) {
    system("cls");
    cursor(0, 1);
    cout << R"(
                                                       _______  _______  _        _       _________ _        _______ 
                                                      (  ____ )(  ___  )( (    /|| \    /\\__   __/( (    /|(  ____ \
                                                      | (    )|| (   ) ||  \  ( ||  \  / /   ) (   |  \  ( || (    \/
                                                      | (____)|| (___) ||   \ | ||  (_/ /    | |   |   \ | || |      
                                                      |     __)|  ___  || (\ \) ||   _ (     | |   | (\ \) || | ____ 
                                                      | (\ (   | (   ) || | \   ||  ( \ \    | |   | | \   || | \_  )
                                                      | ) \ \__| )   ( || )  \  ||  /  \ \___) (___| )  \  || (___) |
                                                      |/   \__/|/     \||/    )_)|_/    \/\_______/|/    )_)(_______)
)";
    bool alguienRescato = false;
    int displayIndex = 1;
    for (int i = 0; i < size; ++i) {
        if (ranking[i].habitantesRescatados > 0) {  // Mostrar solo los que participaron
            cursor(60, 12 + displayIndex - 1);
            cout << displayIndex << ". Modelo: " << ranking[i].nombre_modelo() << " - Habitantes Rescatados: " << ranking[i].habitantesRescatados;
            ++displayIndex;
            alguienRescato = true;
        }
    }

    if (!alguienRescato) {
        cursor(60, 12);
        cout << "Nadie rescató a un habitante";
    }

    system("pause>0");
}

void panelControl(int habitantesRestantes, Vehiculo* helicop, Rescate* rescate, int x, int y) {
    int xtamańo[3] = { 0 };
    int ytamańo[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        if (helicop[i].modelo == 1) {
            xtamańo[i] = 18;
            ytamańo[i] = 7;
        }
        else if (helicop[i].modelo == 2) {
            xtamańo[i] = 16;
            ytamańo[i] = 3;
        }
        else if (helicop[i].modelo == 3) {
            xtamańo[i] = 13;
            ytamańo[i] = 4;
        }
        else if (helicop[i].modelo == 4) {
            xtamańo[i] = 22;
            ytamańo[i] = 3;
        }
        else if (helicop[i].modelo == 5) {
            xtamańo[i] = 27;
            ytamańo[i] = 6;
        }
        else if (helicop[i].modelo == 6) {
            xtamańo[i] = 5;
            ytamańo[i] = 5;
        }
        else if (helicop[i].modelo == 7) {
            xtamańo[i] = 18;
            ytamańo[i] = 4;
        }
        else if (helicop[i].modelo == 8) {
            xtamańo[i] = 14;
            ytamańo[i] = 3;
        }
    }

    color_console(3);
    color_text(1);
    cursor(x, y);
    cout << helicop[0].nombre_modelo();
    cursor(x, y + 1);
    cout << "VELOCIDAD: " << helicop[0].velocidad;
    cursor(x, y + 2);
    cout << "TAMANO: " << xtamańo[0] << "x" << ytamańo[0];
    cursor(x, y + 3);
    cout << "RESCATES: " << helicop[0].habitantesRescatados;

    cursor(x + 35, y);
    cout << helicop[1].nombre_modelo();
    cursor(x + 35, y + 1);
    cout << "VELOCIDAD: " << helicop[1].velocidad;
    cursor(x + 35, y + 2);
    cout << "TAMANO: " << xtamańo[1] << "x" << ytamańo[1];
    cursor(x + 35, y + 3);
    cout << "RESCATES: " << helicop[1].habitantesRescatados;

    cursor(x + 70, y);
    cout << helicop[2].nombre_modelo();
    cursor(x + 70, y + 1);
    cout << "VELOCIDAD: " << helicop[2].velocidad;
    cursor(x + 70, y + 2);
    cout << "TAMANO: " << xtamańo[2] << "x" << ytamańo[2];
    cursor(x + 70, y + 3);
    cout << "RESCATES: " << helicop[2].habitantesRescatados;

    cursor(x + 105, y);
    cout << "SEGUNDOS: " << rescate->segundos;
    cursor(x + 105, y + 1);
    cout << "CRONOMETRO: " << rescate->transcurrido;
    color_console(1);
    color_text(16);
}

void mostrarTodosHelicopteros(int x, int y) {
    system("cls");
    dibujarHelicopter(x, y, 15, 1, 1);
    cursor(x + 7, y + 7);
    cout << "SKYHAWK";
    dibujarHelicopter(x + 25, y, 15, 2, 1);
    cursor(x + 32, y + 7);
    cout << "FALCON";
    dibujarHelicopter(x + 50, y, 15, 3, 1);
    cursor(x + 57, y + 7);
    cout << "SHADOW";
    dibujarHelicopter(x + 75, y, 15, 4, 1);
    cursor(x + 82, y + 7);
    cout << "THUNDERBIRD";
    dibujarHelicopter(x, y + 10, 15, 5, 1);
    cursor(x + 7, y + 17);
    cout << "EAGLE";
    dibujarHelicopter(x + 31, y + 10, 15, 6, 1);
    cursor(x + 32, y + 17);
    cout << "GUARDIAN";
    dibujarHelicopter(x + 48, y + 10, 15, 7, 1);
    cursor(x + 57, y + 17);
    cout << "VALKYRIE";
    dibujarHelicopter(x + 75, y + 10, 15, 8, 1);
    cursor(x + 82, y + 17);
    cout << "SPYLOT";
    _sleep(2000);
}

void animacionInicial(int x, int y) {
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 60; j++) {
            cursor(x + j, y + i);
            color_console(logito[i][j]);
            cout << " ";
        }
    }

    color_console(1);
}

void introduccion() {
    system("cls");
    int color;
    int diseńo;
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(69, 0, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(69, 10, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(69, 20, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(69, 30, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(9, 15, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(39, 15, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(99, 15, color, diseńo, 1);

    _sleep(500);
    color = aleatorio(2, 16);
    diseńo = aleatorio(1, 8);
    dibujarHelicopter(129, 15, color, diseńo, 1);

    _sleep(500);
    system("cls");
    cursor(0, 13);
    cout << R"(
                                 ______  _________ _______  _                 _______  _       _________ ______   _______ 
                                (  ___ \ \__   __/(  ____ \( (    /||\     /|(  ____ \( (    /|\__   __/(  __  \ (  ___  )
                                | (   ) )   ) (   | (    \/|  \  ( || )   ( || (    \/|  \  ( |   ) (   | (  \  )| (   ) |
                                | (__/ /    | |   | (__    |   \ | || |   | || (__    |   \ | |   | |   | |   ) || |   | |
                                |  __ (     | |   |  __)   | (\ \) |( (   ) )|  __)   | (\ \) |   | |   | |   | || |   | |
                                | (  \ \    | |   | (      | | \   | \ \_/ / | (      | | \   |   | |   | |   ) || |   | |
                                | )___) )___) (___| (____/\| )  \  |  \   /  | (____/\| )  \  |___) (___| (__/  )| (___) |
                                |/ \___/ \_______/(_______/|/    )_)   \_/   (_______/|/    )_)\_______/(______/ (_______) 
)";
    _sleep(1000);
}

void escenario() {
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 160; j++) {
            cursor(j, i);
            color_console(escenario_principal[i][j]);
            cout << " ";
        }
    }

    color_console(1);
}

void iniciarSimulacion() {
    char opc;

    Ranking* rankingAcumulado = new Ranking[8];
    for (int i = 0; i < 8; ++i) {
        rankingAcumulado[i].modelo = i + 1;
        rankingAcumulado[i].habitantesRescatados = -1;
    }

    do {
        system("cls");

        escenario();

        Personaje* habitantes = new Personaje[10];
        Vehiculo* helicopter = new Vehiculo[3];
        Rescate* rescate = new Rescate;

        double habitantes_restantes = 10;
        int habitantes_zonasegura = 0;

        habitantes = traerHabitantes();
        helicopter = traerHelicopteros();
        rescate = traerRescate();

        rescate->iniciar();
        while (rescate->faltante > 0 && habitantes_zonasegura != 10)
        {
            rescate->actualizar();

            cursor(150, 1);
            cout << "ZONA";

            cursor(149, 2);
            cout << "SEGURA";

            cursor(83, 1);
            cout << "ZONA";

            cursor(82, 2);
            cout << "INSEGURA";

            panelControl(habitantes_zonasegura, helicopter, rescate, 20, 35);

            //IMPRIMIR PERSONAJES
            for (int i = 0; i < 10; i++) {
                habitantes[i].imprimir();
            }

            //IMPRIMIR VEHICULOS
            for (int i = 0; i < 3; i++) {
                helicopter[i].borrar();
                helicopter[i].mover();
                helicopter[i].imprimir();

                //COLISION CON HABITANTES
                if (helicopter[i].x >= 75 && helicopter[i].x <= 76 && !helicopter[i].traeHabitante) {
                    for (int j = 0; j < 10; j++) {
                        if (!habitantes[j].rescatado) {
                            helicopter[i].traeHabitante = true;
                            habitantes[j].borrar();
                            habitantes[j].rescatado = true;
                            habitantes_restantes--;
                            break; // Sal del bucle después de rescatar un habitante
                        }
                    }

                }
            }

            for (int i = 0; i < 3; i++) {
                if (helicopter[i].llegoAZona && helicopter[i].x <= 75) {
                    helicopter[i].dx *= -1;
                }

                //COLISIONES CON ZONA SEGURA
                if (helicopter[i].x >= 135 && helicopter[i].x <= 140 && helicopter[i].traeHabitante) {
                    helicopter[i].habitantesRescatados++;
                    helicopter[i].traeHabitante = false;
                    helicopter[i].llegoAZona = true;
                    helicopter[i].dx *= -1;

                    // Marcar al habitante como en zona segura
                    for (int j = 0; j < 10; j++) {
                        if (habitantes[j].rescatado && !habitantes[j].zonaSegura) {
                            habitantes[j].zonaSegura = true;
                            habitantes_zonasegura++;
                            break; // Sal del bucle después de encontrar al habitante correspondiente
                        }
                    }
                }

                if (helicopter[i].x >= 145 && helicopter[i].x <= 150 && helicopter[i].traeHabitante) {
                    helicopter[i].dx = 0;
                }

                if (habitantes_restantes == 0 && habitantes_zonasegura == 10) {
                    helicopter[i].dx = 0;
                    rescate->pausar();
                    break;
                }
            }

            _sleep(100);
        }

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (rankingAcumulado[j].modelo == helicopter[i].modelo) {
                    if (rankingAcumulado[j].habitantesRescatados == -1) rankingAcumulado[j].habitantesRescatados = 0;
                    rankingAcumulado[j].habitantesRescatados += helicopter[i].habitantesRescatados;
                    break;
                }
            }
        }

        delete[] helicopter;
        delete[] habitantes;
        delete rescate;

        //PREGUNTAR SI SEGUIRAN OTRA SIMULACION
        do {
            system("cls");
            cursor(60, 20);
            cout << "DESEA REPETIR EL SIMULADOR? [S-N]: ";
            cin >> opc;
            if (opc > 90) opc -= 32;
        } while (!(opc == 'S' || opc == 'N'));
    } while (opc != 'N');

    ordenarBurbuja(rankingAcumulado, 8);
    mostrarRanking(rankingAcumulado, 8);
    delete[] rankingAcumulado;
}

void instrucciones() {
    cout << endl;
    cout << endl;
    cout << "\tOBJETIVO DEL JUEGO:\n";
    cout << "\tRescatar la mayor cantidad de personajes que se encuentren en una zona insegura y llevarlos a una zona segura.\n";
    cout << endl;
    cout << endl;
    cout << "\t1. Como inicia el rescate:\n";
    cout << "\t- Seleccion de vehiculo: Al inicio del juego, se elegiran 3 vehiculos aereos con colores diferentes asignados aleatoriamente por la maquina.\n";
    cout << "\t- Nombre del vehiculo: Cada uno de los 3 vehiculos elegidos tendra un nombre distinto con el cual vamos a poder diferenciar a cada uno.\n";
    cout << "\t- Posicion de cada personaje: Cada personaje estatico se va a encontrar distribuido en la zona insegura esperando la llegada de los vehiculos aereos\n";
    cout << "\t  para su rescate.\n";
    cout << "\t- Movilidad del vehiculo: Los 3 vehiculos elegidos aleatoriamente tienen velocidades diferentes y se desplazan por el aire hacia la zona insegura.\n";
    cout << endl;
    cout << endl;
    cout << "\t2. Como se gana:\n";
    cout << "\t- Rescate de personajes: Cuando los 3 vehiculos lleguen a la zona insegura, cada uno recogera 1 persona y se dirigiran hacia la zona segura.\n";
    cout << "\t- Puntos: Se otorgan puntos por cada personaje rescatado y entregado en la zona segura.\n";
    cout << "\t- Condicion de victoria: Uno de los 3 vehiculos gana al rescatar la mayor cantidad de personajes dentro del tiempo limite.\n";
    cout << endl;
    cout << endl;
    cout << "\t3. żCuando termina la carrera y que pasa luego?:\n";
    cout << "\t- Fin del tiempo: La mision termina cuando el tiempo asignado para el rescate se agota.\n";
    cout << "\t- Reinicio de mision: Se mostrara en pantalla un mensaje donde se preguntara si se desea repetir la animacion o no.\n";
    cout << "\t- Ranking: Al finalizar la mision, al no desear repetir la animacion, se muestra en pantalla la tabla de posiciones con la cantidad de personajes que\n";
    cout << "\t  rescato cada vehiculo aereo en el tiempo dado.\n";
}

void creditos() {
    cout << "\t\t______________________________________________________________\n";
    cout << endl;
    cout << "\tSIMRESCUE: Mision Zona Segura\n";
    cout << "\t\t______________________________________________________________\n";
    cout << endl;
    cout << "\tDesarrollado por:\n";
    cout << endl;
    cout << endl;
    cout << "\tJoel Fernando Mora Rivera\n";
    cout << "\tU20241B227\n";
    cout << "\tIngenieria de Software\n";
    cout << endl;
    cout << endl;
    cout << "\tAngel Martin Villareal Bazan\n";
    cout << "\tU202417857\n";
    cout << "\tIngenieria de Software\n";
    cout << endl;
    cout << endl;
    cout << "\tElias Daniel Ramos Cerdan\n";
    cout << "\tU20201A277\n";
    cout << "\tIngenieria de Software\n";
    cout << "\t\t______________________________________________________________\n";
    cout << endl;
    cout << "\tSeccion: WX1D\n";
    cout << "\tCurso: CC126 - 2401\n";
    cout << "\t\t______________________________________________________________\n";
    cout << endl;
    cout << "\tAgradecimientos Especiales\n";
    cout << endl;
    cout << "\tA nuestros profesores, amigos y familias por su apoyo constante y motivacion incondicional.\n";
    cout << "\t\t______________________________________________________________\n";
    cout << endl;
    cout << "\tĄGracias por jugar!\n";
    cout << endl;
    cout << "\tTu apoyo y feedback son fundamentales para nosotros.\n";
    cout << "\tEsperamos que hayas disfrutado de la experiencia tanto como nosotros disfrutamos creandola.\n";
    cout << "\t\t______________________________________________________________\n";
    cout << endl;
    cout << "\tŠ 2024 SimRescue. Todos los derechos reservados.\n";
    cout << "\t\t______________________________________________________________\n";
}

void menu() {
    iniciar();
    introduccion();
    int opc;
    int xMenu = 69;
    int yMenu = 31;
    do {
        system("cls");
        animacionInicial(xMenu - 20, 1);
        cursor(xMenu, yMenu);
        cout << "[1] INICIAR SIMULACION";
        cursor(xMenu, yMenu + 1);
        cout << "[2] INSTRUCCIONES";
        cursor(xMenu, yMenu + 2);
        cout << "[3] CREDITOS";
        cursor(xMenu, yMenu + 3);
        cout << "[9] SALIR";
        cursor(xMenu, yMenu + 5);
        cout << "Ingrese la opcion: ";
        cin >> opc;
        switch (opc) {
        case 1:
            system("cls");
            mostrarTodosHelicopteros(30, 8);
            iniciarSimulacion();
            system("pause>0");
            break;
        case 2:
            system("cls");
            instrucciones();
            system("pause>0");
            mostrarTodosHelicopteros(30, 8);
            system("pause>0");
            break;
        case 3:
            system("cls");
            creditos();
            system("pause>0");
            break;
        case 9:
            break;
        }
    } while (opc != 9);
}

int main()
{
    menu();
    
    return 0;
}