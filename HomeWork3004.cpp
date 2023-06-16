#include <iostream>
#include <string>
#include <vector>

struct StudentStatistics {
    std::string facultet;
    std::string surname;
    int number;
    int grade;
    int sum=0;
    double sr_ball;
    void AddElem() {
        std::cout << "Факультет\n-->";
        std::cin >> facultet;
        std::cout << "\nфамилия студента\n-->";
        std::cin >> surname;
        std::cout << "\nкол-во оценок\n-->";
        std::cin >> number;
        std::cout << "\n";
        for (int i = 0; i < number; i++)
        {
            std::cout << "введите оценку\n-->";
            std::cin >> grade;
            sum += grade;
        }
        sr_ball = float(sum) / float(number);//при int-овом значении не выдает дробный средний балл
    }

    void OutputElem() {
        std::cout << "Факультет: " << facultet;
        std::cout << "\nфамилия студента:" << surname;
        std::cout << "\nсредний балл: " << sr_ball;
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");
    StudentStatistics obj;
    obj.AddElem();
    std::cout << "\n";
    obj.OutputElem();
}


