const Post = require("../model/post");

exports.post_create = (req, res) => {
  let post = new Post({
    name: req.body.name,
    age: req.body.age
  });

  post.save(err => {
    if (err) {
      return next(err);
    }
    res.send("Post Created Successfully");
  });
};

exports.post_show = (req, res) => {
  Post.findById(req.params.id, (err, post) => {
    // id에 해당하는 document 반환.
    if (err) {
      return next(err);
    }
    res.send(post);
  });
};

exports.post_update = (req, res) => {
  Post.findByIdAndUpdate(req.params.id, { $set: req.body }, (err, post) => {
    // $: Query Selection Operator
    if (err) {
      return next(err);
    }
    res.send("Post Updated");
  });
};

exports.post_delete = (req, res) => {
  Post.findByIdAndRemove(req.params.id, err => {
    if (err) {
      return next(err);
    }
    res.send("Deleted Successfully");
  });
};
