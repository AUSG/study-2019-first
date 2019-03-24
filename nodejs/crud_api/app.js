const express = require("express");
const mongoose = require("mongoose");
require("dotenv").config();

var connect = require("./model");
const post = require("./routes/post");

const app = express();

connect(); // DB 실행

app.set("port", process.env.PORT || 8001);

app.use(express.json());
app.use(express.urlencoded({ extended: false }));

app.use("/posts", post);

app.listen(app.get("port"), () => {
  console.log(`서버가 ${app.get("port")}번 포트에서 정상적으로 작동합니다.`);
});
