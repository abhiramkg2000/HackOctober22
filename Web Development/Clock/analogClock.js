const button = document.querySelector(".center");
const hour = document.querySelector("#hour");
const minute = document.querySelector("#minute");
const second = document.querySelector("#second");

const timer = () => {
  const d = new Date();
  const hr = d.getHours();
  const min = d.getMinutes();
  const sec = d.getSeconds();
  const hr_rotation = 30 * hr + min / 2;
  const min_rotation = 6 * min;
  const sec_rotation = 6 * sec;
  hour.style.transform = `rotate(${hr_rotation}deg)`;
  minute.style.transform = `rotate(${min_rotation}deg)`;
  second.style.transform = `rotate(${sec_rotation}deg)`;
};

setInterval(timer, 1000);

button.addEventListener("click", () => {
  location.href = "digitalClock.html";
});
