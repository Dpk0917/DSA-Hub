SELECT current_day_weather.id
FROM Weather AS current_day_weather
JOIN Weather AS previous_day_weather
  ON DATEDIFF(current_day_weather.recordDate, previous_day_weather.recordDate) = 1
WHERE current_day_weather.temperature > previous_day_weather.temperature;
