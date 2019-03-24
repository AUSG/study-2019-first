const mongoose = require("mongoose");

let PostSchema = new mongoose.Schema({
  name: {
    type: String,
    required: true
  },
  age: {
    type: Number,
    require: true
  },
  createAt: {
    type: Date,
    default: Date.now
  }
});

module.exports = mongoose.model("Post", PostSchema);

// mongoose.model() 스키마를 호출하면 Mongoose가 모델을 컴파일한다.
// 첫 번째 인수는 모델이 사용하는 컬렉션의 이름.
// Mongoose는 자동으로 모델 이름의 복수형, 소문자 버전을 찾는다.
// 따라서 Post 모델은 데이터베이스의 Post 컬렉션 용 모델이다.

// 요약
// Post라는 모델을 생성한다. 오른쪽 인수를 통해서.
// 자동으로 복수형, 소문자 검색.
