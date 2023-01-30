#include <iostream>
using namespace std;
/*
Реализовать структуру «Стиральная машинка»
(фирма, цвет, ширина, длина, высота, мощность, скорость
отжима, температура нагрева). Создайте экземпляр 
структуры и проиллюстрируйте работу с ним.
*/
struct washing_machine {
    char firm[25];
    char color[25];

    int width, length, height, power, speed, temperature;
};

/*
Разработать структуру, которая описывает
животное (название, класс, кличка). Создать функции
для работы с этой структурой:
■ Заполнение объекта;
■ Вывод на экран данных об объекте;
■ Функция «Подать голос».
*/
struct animal {
    int id = 1;
    char* name = new char[25];
    char* cl { nullptr };
    char* nickname = new char[25];
} d, *a;

animal enter_animal1(animal a){
    a.name = (char*)"first name";
    a.cl = new char[25] {"first class"};
    a.nickname = (char*)"first nick";
    return a;
}
void enter_animal2(animal *a){
    a->name = (char*)"second name";
    a->cl = new char[25] {"second class"};
    a->nickname = (char*)"second nick";
}
void enter_animal3(animal &a){
    a.name = (char*)"third name";
    a.cl = new char[25] {"third class"};
    a.nickname = (char*)"third nick";
}

void print_animal1(animal a){
    cout << a.name << " " << a.cl << " " << a.nickname << endl;
}
void print_animal2(animal *a){
    cout << a->name << " " << a->cl << " " << a->nickname << endl;
}
void print_animal3(animal &a){
    cout << a.name << " " << a.cl << " " << a.nickname << endl;
}


/*
Реализуйте структуру, которая хранит ФИО
студента и 10 полей. Каждое поле — это оценка
(сдал/не сдал).
Создайте один экземпляр этой структуры и реализуйте
для него следующие действия:
■ Заполнить структуру;
■ Вывод информации;
■ Печать среднего балла.
Создайте массив экземпляров этой структуры и реализуйте 
для него следующие действия:
■ Добавить студента;
■ Проставить оценки студенту;
■ Вывод списка студентов;
■ Печать оценок конкретного студента;
■ Печать должников.
*/
struct Student {
    char FIO[125];
    bool b[10];
};
void CreateStudent(Student* student) {
    gets_s(student->FIO);
    for (int i = 0; i < 10; i++) {
        student->b[i] = rand() % 2;
    }
}
void PrintStudent(Student* student) {
    float sum = 0;
    puts(student->FIO);
    cout << "\t\t";
    for (int i = 0; i < 10; i++) {
        cout << student->b[i] << " ";
        sum += student->b[i];
    }
    cout << endl << '\t' << sum / 10 << endl;
    cout << endl << endl;
}
void PassStudent(void(*stud)(Student*), Student* s, int n = 1) {
    if (s) for (int i = 0; i < n; i++) stud(s++);
}

int main()
{
    /*washing_machine w1{ "samsung", "black", 65, 45, 85, 150, 1200, 80 };

    washing_machine w2;
    strcpy_s(w2.firm, "Bosch");
    strcpy_s(w2.color, "White");
    //w2.color = "White"; - так нельзя. Правило занесения данных в массив
    w2.width = 75;
    w2.length = 50;
    w2.height = 85;
    w2.power = 120;
    w2.speed = 1000;
    w2.temperature = 90;

    washing_machine w3;
    gets_s(w3.firm);
    gets_s(w3.color);
    cin >> w3.width >> w3.length 
        >> w3.height >> w3.power 
        >> w3.speed >> w3.temperature;*/   
    /*a = new animal;
    animal* a2 = &d;
    a->name = new char[25];
    gets_s(a->name, 24);
    a->cl = new char[25] {"Dog"};
    a->nickname = (char*)"Bobik" ;

    puts(a->name);
    puts(a->cl);
    puts(a->nickname);*/
    /*animal a;
    animal* a2 = new animal;
    a = enter_animal1(a);
    print_animal1(a);

    enter_animal2(a2);
    print_animal2(a2);

    enter_animal3(a);
    print_animal3(a);*/

    /*Student st;
    PassStudent(CreateStudent, &st);
    PassStudent(PrintStudent, &st);

    Student* students = new Student[3];
    PassStudent(CreateStudent, students, 3);
    PassStudent(PrintStudent, students, 3);*/

    Student* stNULL = nullptr;
    PassStudent(CreateStudent, stNULL);
    PassStudent(PrintStudent, stNULL);
}
