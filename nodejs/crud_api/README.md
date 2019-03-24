# MongoDB CRUD API 사용 가이드

## 정보

해당 API는 [Node.js](https://nodejs.org/)와 [MongoDB](https://www.mongodb.com/)를 이용한 CRUD 프로그램입니다.

> API를 사용하기 위해서는 Node.js와 MongoDB 설치가 필요합니다.

## 버전

- Node.js v10.12.0
- MongoDB v4.0.2

## 설치

- \$ npm install | yarn install
- \$ npm start | node app.js

## 설정

./model/index.js에 자신의 계정 정보를 추가합니다.

## Postman을 이용한 API 사용 방법

> [Postman](https://www.getpostman.com/) 설치가 필요합니다.

예시

```
URL : http://localhost:3000/posts/[id]/[action]
Method : [Read: Get], [Create, Update, Delete: Post]
Body(x-www-form-urlenceded)
  - name: 이름
  - age: 나이

// id: ObjectId, action: create, update, delete
```

## 개선사항

- Front-end 연결
- User Session 추가
- JWT 적용
- AWS Deploy
- etc...

## 감사합니다.

사용에 어려움이나 문제가 있으면 issue를 남겨주세요.
