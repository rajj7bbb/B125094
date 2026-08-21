#include <iostream>
using namespace std;

class Weather
{
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:
    Weather(string city, float temp, string condition)
    {
        cityName = city;
        temperature = temp;
        weatherCondition = condition;
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w)
{
    cout << "Weather Report";
    cout << "City:" << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    cout << "Weather Condition: " << w.weatherCondition << endl;

    if (w.temperature>35)
        cout << "Very Hot" << endl;
    else if (w.temperature >= 20)
        cout << "Pleasant" << endl;
    else
        cout << "Cool" << endl;
}

int main()
{
    string city, condition;
    float temp;

    cout << "Enter city name: ";
    getline(cin, city);

    cout << "Enter temperature: ";
    cin >> temp;

    Weather w(city, temp, condition);
    generateReport(w);
    return 0;
}