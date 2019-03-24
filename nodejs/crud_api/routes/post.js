const express = require("express");
const router = express.Router();

const postsController = require("../controller/posts_controller");

// READ
// get /posts/:id
router.get("/:id", postsController.post_show);

// CREATE
// post /posts/create
router.post("/create", postsController.post_create);

// UPDATE
// post /posts/:id/update
router.post("/:id/update", postsController.post_update);

// DELETE
// post /posts/:id/delete
router.post("/:id/delete", postsController.post_delete);

module.exports = router;
