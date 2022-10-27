//core modules
// const http = require("http");

//3rd party modules
const express = require("express");

//own modules
// const file_store = require("./file_store");

// fs.writeFileSync("hello.text", "Where is my node");

const app = express();

// app.use((req, res, next) => {
//   console.log("in worlddd of hello");

//   next();
// });

// app.use((req, res, next) => {
//   console.log("in worlddd of hellossss");
//   res.send("yoooo");
// });

app.use("/users", (req, res, next) => {
  res.send("Yoo users");
});

app.use("/", (req, res, next) => {
  res.send("in worlddd of hello");
});

// const server = http.createServer(app);

// server.listen(3000);

app.listen(3000);
