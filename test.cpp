#include "CPP_1.h"


int main()
{
    setlocale(LC_CTYPE, "Russian");
    //srand(time(0));

    Teacher correctAnswers;

    // —оздаем студентов в контейнере
    std::vector<Student*> students = {
        new ExelentStudent("Vasya"),
        new GoodStudent("Petya"),
        new GoodStudent("Kate"),
        new BadStudent("Masha"),
        new ExelentStudent("Eva"),
        new BadStudent("Maksim")
    };

    // ѕодсчитываем правильные ответы дл€ каждого студента
    for (Student* student : students) {
        student->countCorrectAnswers(correctAnswers);
    }

    // ¬ыводим имена студентов и их количество правильных ответов
    for (Student* student : students) {
        student->printCorrectAnswers();
    }

    // ќсвобождаем пам€ть
    for (Student* student : students) {
        delete student;
    }

    return 0;
}