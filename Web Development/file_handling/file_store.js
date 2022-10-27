const fs = require("fs");
const file_store = (req, res) => {
  const url = req.url;
  const method = req.method;

  if (url === "/") {
    res.write("<html>");
    res.write("<body>");
    res.write(
      "<form  action='/message' method='POST'><input type='text' name='message'><button type='submit'>Type your name here </button></input></form>"
    );
    res.write("</body>");
    res.write("</html>");

    return res.end();
  }
  if (url === "/message" && method === "POST") {
    const body = [];

    req.on("data", (chunk) => {
      console.log(chunk);
      body.push(chunk);
    });
    req.on("end", () => {
      const parsedBody = Buffer.concat(body).toString();
      console.log(parsedBody);
      const message = parsedBody.split("=")[1];
      fs.writeFileSync("message.txt", message);
    });

    return res.end();
  }

  res.setHeader("Content-Type", "text/html");
  res.write("<html>");
  res.write("<body>");
  res.write("<h1>hello from mrigesh</h1>");
  res.write("</body>");
  res.write("</html>");

  res.end();
};

module.exports = file_store;
