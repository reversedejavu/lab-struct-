// Задание 1  c) Написать функцию, которая возвращает количество секунд в заданной переменной типа «время».
//#include<iostream>
//
//struct Time {
//	int hours;
//	int minutes;
//	int seconds;
//};
//
//int getSeconds(Time t) {
//	return t.hours * 3600 + t.minutes * 60 + t.seconds;
//}
//
//int main() {
//	Time t = { 2, 30, 45 };
//
//	int seconds = getSeconds(t);
//
//	std::cout << "The time is: " << t.hours << ":" << t.minutes << ":" << t.seconds << std::endl; // время
//	std::cout << "The number of seconds is: " << seconds << std::endl; // Количество секунд
//
//	return 0;
//}

// Задание 2 Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и мнимая части.Объявите два числа и получите их значения от пользователя.
// d) Напишите функцию, которая будет складывать комплексные числа.

//#include<iostream>
//
//struct Complex {
//	double real;
//	double imagir;
//};
//
//Complex add(Complex c1, Complex c2) {
//	Complex result;
//	result.real = c1.real + c2.real; // real - действительная
//	result.imagir = c1.imagir + c2.imagir; // imagir - мнимая
//	return result;
//}
//
//int main() {
//	Complex c1, c2;
//
//	std::cout << "Real and imaginary parts of the first complex number.: "; // действительная и мнимая часть первого комплексного числа.
//	std::cin >> c1.real >> c1.imagir;
//
//	std::cout << "Real and minimal part of the second complex number: "; //  действительная и мнимая часть второго комплексного числа.
//	std::cin >> c2.real >> c2.imagir;
//
//	Complex sum = add(c1, c2);
//
//	std::cout << "Sum of the two complex numbers is: " << sum.real << " + " << sum.imagir << "i" << std::endl; // сумма двух комплексных чисел равна
//
//	return 0;
//}


// Задание 5 Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом быстром роботе.

//#include<iostream>
//#include<vector>
//
//struct Robot {
//	double length;
//	double width;
//	double height;
//	double weight;
//	double max_speed;
//};
//
//int main() {
//	std::vector<Robot> robots = {
//		{ 2.5, 1.8, 1.2, 120, 10.5 },  
//		{ 1.8, 1.5, 1.0, 80, 12.3 }, 
//		{ 3.0, 2.0, 1.5, 150, 9.8 }, 
//		{ 2.0, 1.2, 0.8, 60, 13.5 }
//	};
//	Robot fastest_robot = robots[0];
//	for (int i = 1; i < robots.size(); i++) {
//		if (robots[i].max_speed > fastest_robot.max_speed) { 
//			fastest_robot = robots[i];
//		}
//	}
//	std::cout << "The fastest robot has the following parameters:\n"; // самый быстрый робот, имеющий параметры:
//	std::cout << "Length: " << fastest_robot.length << "\n";
//	std::cout << "Width: " << fastest_robot.width << "\n";
//	std::cout << "Width: " << fastest_robot.width << "\n";
//	std::cout << "Weight: " << fastest_robot.weight << "\n";
//	std::cout << "Max speed: " << fastest_robot.max_speed << "\n";
//
//	return 0;
//}


// Задание 6 Имеется информация о датчиках : диапазон измеряемых значений(min, max), погрешность, максимальная скорость.Вывести данные о самом точном датчике.

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Sensor {
//    double minValue;
//    double maxValue;
//    double accuracy;
//    double maxSpeed;
//};
//
//Sensor findSensorWithMinSpeed(const vector<Sensor>& sensors) {
//    // Используем алгоритм сортировки по заданному критерию (максимальная скорость)
//    return *min_element(sensors.begin(), sensors.end(),
//        [](const Sensor& s1, const Sensor& s2) {
//            return s1.maxSpeed < s2.maxSpeed;
//        });
//}
//
//int main() {
//    // Создаем вектор с информацией о датчиках
//    vector<Sensor> sensors = {
//        {0.0, 100.0, 0.1, 5.0},
//        {10.0, 200.0, 0.05, 3.0},
//        {5.0, 150.0, 0.2, 2.5}
//    };
//
//    // Находим датчик с наименьшей скоростью
//    Sensor minSpeedSensor = findSensorWithMinSpeed(sensors);
//
//    // Выводим информацию о датчике с наименьшей скоростью
//    cout << "Lowest speed sensor:" << endl; // Датчик с наименьшей скоростью
//    cout << "Minimum value: " << minSpeedSensor.minValue << endl; // Минимальное значение
//    cout << "Maximum value: " << minSpeedSensor.maxValue << endl; // Максимальное значение
//    cout << "Error: " << minSpeedSensor.accuracy << endl; // Погрешность
//    cout << "Maximum speed: " << minSpeedSensor.maxSpeed << endl; // Максимальная скорость
//
//    return 0;
//}


// Задание 11 Робот - автомобиль описывается как структура с полями : скорость, длительность движения и номер.Напишите функцию для расчёта пройденного расстояния.
//#include <iostream>
//using namespace std;
//
//struct RobotPlane {
//    double propellerSpeed;  // скорость вращения винта (обороты в минуту)
//    double propellerRadius; // радиус винта (в метрах)
//    double thrustCoefficient; // коэффициент тяги
//};
//
//double calculateThrust(const RobotPlane& plane) {
//    double thrust = plane.propellerSpeed * plane.propellerRadius * plane.thrustCoefficient; // тяга = скорость вращения * радиус * коэффициент тяги
//    return thrust;
//}
//
//int main() {
//    RobotPlane plane = { 1700.0, 2.5, 1.1 };  // скорость вращения винта 1700 об/мин, радиус винта 2.5 м, коэффициент тяги 1.1
//    double planeThrust = calculateThrust(plane);
//    cout << "Thrust created by the propeller: " << planeThrust << " Н (newton)" << endl; // тяга, создаваемая винтом
//    return 0;
//}