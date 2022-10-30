const time = document.querySelector(".time");
const date = document.querySelector(".currDate");
const day = document.querySelector(".day");
const button = document.querySelector(".center");

const timer = () => {
  const dateObj = new Date();

  let currDate = dateObj.toLocaleDateString();
  let currTime = dateObj.toLocaleTimeString();

  const weekday = new Array(7);
  weekday[0] = "Sunday";
  weekday[1] = "Monday";
  weekday[2] = "Tuesday";
  weekday[3] = "Wednesday";
  weekday[4] = "Thursday";
  weekday[5] = "Friday";
  weekday[6] = "Saturday";

  let currDay = weekday[dateObj.getDay()];

  time.textContent = currTime;
  date.textContent = currDate;
  day.textContent = currDay;
};

setInterval(timer, 1000);

button.addEventListener("click", () => {
  document.location.href = "analogClock.html";
});
