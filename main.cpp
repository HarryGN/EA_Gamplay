/******************************************************************************

EA Gameplay Dynamic Weather
Author: Harry Guan

*******************************************************************************/

#include <iostream>
#include <string>

class Weather {
  public:
    Weather(std::string currentWeather, int temperature, std::string forecast) {
      this->currentWeather = currentWeather;
      this->temperature = temperature;
      this->forecast = forecast;
    }

    std::string getCurrentWeather() {
      return this->currentWeather;
    }

    int getTemperature() {
      return this->temperature;
    }

    std::string getForecast() {
      return this->forecast;
    }

    void updateWeather(std::string newWeather, int newTemperature, std::string newForecast) {
      this->currentWeather = newWeather;
      this->temperature = newTemperature;
      this->forecast = newForecast;
    }

  private:
    std::string currentWeather;
    int temperature;
    std::string forecast;
};

int main() {
  Weather weather("Sunny", 80, "Clear");
  std::cout << "Current weather: " << weather.getCurrentWeather() << std::endl;
  std::cout << "Current temperature: " << weather.getTemperature() << std::endl;
  std::cout << "Forecast: " << weather.getForecast() << std::endl;
  weather.updateWeather("Rainy", 65, "Stormy");
  std::cout << "Updated weather: " << weather.getCurrentWeather() << std::endl;
  std::cout << "Updated temperature: " << weather.getTemperature() << std::endl;
  std::cout << "Updated forecast: " << weather.getForecast() << std::endl;
  return 0;
}
