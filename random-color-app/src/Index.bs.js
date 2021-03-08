'use strict';

var React = require("react");
var ReactDom = require("react-dom");
var MyName$RandomColorApp = require("./MyName.bs.js");
var MyStyle$RandomColorApp = require("./MyStyle.bs.js");
var ChangeColor$RandomColorApp = require("./ChangeColor.bs.js");

var style = document.createElement("style");

document.head.appendChild(style);

style.innerHTML = MyStyle$RandomColorApp.style;

function makeName(param) {
  var name = document.createElement("div");
  name.className = "containerTitle";
  document.body.appendChild(name);
  return name;
}

function makeContainer(param) {
  var content = document.createElement("div");
  content.className = "containerContent";
  for(var j = 1; j <= 3; ++j){
    document.body.appendChild(content);
  }
  return content;
}

ReactDom.render(React.createElement(MyName$RandomColorApp.make, {
          children: "Name: Pisitpong Wongtha"
        }), makeName(undefined));

for(var i = 1; i <= 3; ++i){
  ReactDom.render(React.createElement(ChangeColor$RandomColorApp.make, {}), makeContainer(undefined));
}

var row_number = 3;

var start = 1;

exports.style = style;
exports.makeName = makeName;
exports.makeContainer = makeContainer;
exports.row_number = row_number;
exports.start = start;
/* style Not a pure module */
