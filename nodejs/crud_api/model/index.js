const mongoose = require("mongoose");

module.exports = () => {
  //모듈이 실행될 때
  const connect = () => {
    if (process.env.NODE_ENV != "production") {
      mongoose.set("debug", true);
    }
    mongoose.connect(
      "mongodb://localhost:27017/postDB",
      //postDB는 예시일 뿐 변경할 수 있습니다.
      { auth: { authSource: "admin" }, user: "", pass: "" },
      // user와 pass에 자신의 계정 정보를 입력합니다.
      error => {
        if (error) {
          console.log("몽고디비 연결 에러", error);
        } else {
          console.log("몽고디비 연결 성공");
        }
      }
    );
  };
  connect();
  mongoose.connection.on("error", error => {
    console.error("몽고디비 연결 에러", error);
  });
  mongoose.connection.on("dicsonnected", error => {
    console.error("몽고디비 연결이 끊어졌습니다. 연결을 재시도합니다.");
    connect();
  });
};
