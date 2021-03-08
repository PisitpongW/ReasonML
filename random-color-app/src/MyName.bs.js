'use strict';

var React = require("react");

function MyName(Props) {
  var children = Props.children;
  return React.createElement("span", undefined, children);
}

var make = MyName;

exports.make = make;
/* react Not a pure module */
