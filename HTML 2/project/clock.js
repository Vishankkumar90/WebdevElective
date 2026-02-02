const clockElement = document.getElementById("clock");
const alarmForm = document.getElementById("alarmForm");
const alarmTimeInput = document.getElementById("alarmTime");
const alarmStatus = document.getElementById("alarmStatus");
const alarmSound = document.getElementById("alarmSound");

let alarmTime = null; 

function updateClock() {
  const now = new Date();
  let hours = now.getHours();
  const minutes = String(now.getMinutes()).padStart(2, "0");
  const seconds = String(now.getSeconds()).padStart(2, "0");

  const amPm = hours >= 12 ? "PM" : "AM";
  hours = hours % 12 || 12; 

  clockElement.textContent = `${hours}:${minutes}:${seconds} ${amPm}`;

  if (alarmTime === `${hours}:${minutes} ${amPm}`) {
    ringAlarm();
  }
}

function ringAlarm() {
  alarmSound.play();
  alarmStatus.textContent = "Alarm ringing!";
}

 alarmForm.addEventListener("submit", (e) => {
  e.preventDefault();
  let [alarmHour, alarmMinute] = alarmTimeInput.value.split(":");
  alarmHour = parseInt(alarmHour);
  
  const amPm = alarmHour >= 12 ? "PM" : "AM";
  alarmHour = alarmHour % 12 || 12;
  alarmTime = `${alarmHour}:${alarmMinute} ${amPm}`;
  
  alarmStatus.textContent = `Alarm set for ${alarmTime}`; 
});

alarmSound.addEventListener("ended", () => {
  alarmTime = null; 
  alarmStatus.textContent = "No alarm set"; 
});

setInterval(updateClock, 1000);

updateClock();
