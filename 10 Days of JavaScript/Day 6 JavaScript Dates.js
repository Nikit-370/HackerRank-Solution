function getDayName(dateString) {
  let dayName;
  const days = [
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
  ];
  dayName = days[new Date(dateString).getUTCDay()];
  return dayName;
}

