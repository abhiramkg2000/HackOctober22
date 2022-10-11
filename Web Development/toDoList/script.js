const balance = document.getElementById("balance");
const credit = document.getElementById("credit");
const debit = document.getElementById("debit");
const allRecs = document.getElementById("allRecs");
const form = document.getElementById("form");
const details = document.getElementById("details");
const amount = document.getElementById("amount");

const localStorageTransactions = JSON.parse(localStorage.getItem('transactions'));
let transactions = localStorage.getItem('transactions') !== null ? localStorageTransactions : [];

//Add Transaction
function addTransaction(e){
    e.preventDefault();
    if(details.value.trim() === ''){
      alert("Please Enter Details");
    }else if(amount.value.trim() === ''){
      alert("Please Enter Amount");
    }
    else {
      const transaction = {
        id: generateID(),
        details: details.value,
        amount: +amount.value
      }
  
      transactions.push(transaction);

      addTransactionDOM(transaction);

      updateLocalStorage();
      updateValues();
      details.value = '';
      amount.value = '';
    }
}

//Generate ID
function generateID() {
    return Math.floor(Math.random() * 100000000);
}

function addTransactionDOM(transaction) {
  const sign = transaction.amount < 0 ? "-" : "+";
  const item = document.createElement("li");

  item.classList.add(
    transaction.amount < 0 ? "recDebit" : "recCredit"
  );

  item.innerHTML = `
    ${transaction.details}<span>${sign}${Math.abs(transaction.amount)}</span>
    <button class = "del" onclick="delTransaction(${transaction.id})"><img src="./images/trashbin.png">
    </button>
    `;

  allRecs.appendChild(item);
}

//Delete Transaction
function delTransaction(id){
    transactions = transactions.filter(transaction => transaction.id !== id)
    updateLocalStorage();
    Init();
}

//Update Balance
function updateValues() {
  const amounts = transactions.map((transaction) => transaction.amount);
  const total = amounts.reduce((acc, item) => (acc += item), 0).toFixed(2);
  const income = amounts
    .filter((item) => item > 0)
    .reduce((acc, item) => (acc += item), 0)
    .toFixed(2);
  const expense = (
    amounts.filter((item) => item < 0).reduce((acc, item) => (acc += item), 0) *
    -1).toFixed(2);

  balance.innerText = `₹${total}`;
  credit.innerText = `₹${income}`;
  debit.innerText = `₹${expense}`;
}

//Local Storage
function updateLocalStorage(){
    localStorage.setItem(
        "transactions", JSON.stringify(transactions)
    )
}

//Init App
function Init() {
  allRecs.innerHTML = "";
  transactions.forEach(addTransactionDOM);
  updateValues();
}

Init();
  
form.addEventListener('submit',addTransaction);
