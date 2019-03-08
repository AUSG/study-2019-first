const nodemailer = require("nodemailer");

nodemailer.createTestAccount((err, account) => {
  let transporter = nodemailer.createTransport({
    /* host: "smtp.ethereal.email", // 본인이 사용하는 SMTP 메일서버가 있다면 사용할 수 있습니다.
    port: 587,
    secure: false, // true for 465, false for other ports
    */

    service: "", // service를 사용하면 SMTP 서버가 없어도 메일을 발송할 수 있습니다. 
                 // ex) 사용할 메일 서비스 (naver, gmail ...)
    auth: {
      user: "", // ID
      pass: "" // Password
    }
  });

  // 발송할 사용자 정보 관리
  let mails = [
    {
      name: "",
      email: ""
      // 다양한 Property 추가 가능.
    },
    // {
    //   name: "",
    //   email: "",
    // },
  ];

  let sendBox = () => {
    for (const mail of mails) {
      let settings = {
        from: "", // Sender Email, Gmail은 위조 불가
        to: mail.email,
        subject: "", // Title
        text: `` // Content
        // text 에는 Template literals를 사용했습니다. 아래 주석처럼 사용하시면 됩니다.
        // `안녕하세요. ${mail.name}님.`

        // html: "<h1>HTML 예시</h1>"
      };

      transporter.sendMail(settings, (err, res) => {
        if (err) {
          return console.log(err);
        }
        console.log("Message sent: %s", res.messageId);
      });
    }
  };

  sendBox();
});
