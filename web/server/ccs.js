var express = require('express');
var router = express.Router();
var fs = require("fs");

router.get('/', function(req, res) {
    res.send(fs.readFileSync("web/views/ccs.html", "utf8"));
})

module.exports = router;