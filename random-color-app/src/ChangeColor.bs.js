'use strict';

var React = require("react");
var RandomColorRe = require("bs-randomcolor/src/RandomColorRe.bs.js");

var containerStyle = {
  display: "flex",
  height: "120px",
  alignItems: "center"
};

function ChangeColor(Props) {
  return React.createElement("div", {
              style: containerStyle
            }, React.createElement("view", {
                  style: {
                    backgroundColor: RandomColorRe.randomColor(undefined, undefined, undefined, undefined, undefined, undefined, undefined),
                    display: "flex",
                    height: "120px",
                    margin: "40px",
                    width: "120px",
                    borderRadius: "12px 12px 12px 12px",
                    boxShadow: "0px 4px 16px rgb(200, 200, 200)",
                    alignItems: "center",
                    justifyContent: "space-around"
                  }
                }), React.createElement("view", {
                  style: {
                    backgroundColor: RandomColorRe.randomColor(undefined, undefined, undefined, undefined, undefined, undefined, undefined),
                    display: "flex",
                    height: "120px",
                    margin: "40px",
                    width: "120px",
                    borderRadius: "12px 12px 12px 12px",
                    boxShadow: "0px 4px 16px rgb(200, 200, 200)",
                    alignItems: "center",
                    justifyContent: "space-around"
                  }
                }), React.createElement("view", {
                  style: {
                    backgroundColor: RandomColorRe.randomColor(undefined, undefined, undefined, undefined, undefined, undefined, undefined),
                    display: "flex",
                    height: "120px",
                    margin: "40px",
                    width: "120px",
                    borderRadius: "12px 12px 12px 12px",
                    boxShadow: "0px 4px 16px rgb(200, 200, 200)",
                    alignItems: "center",
                    justifyContent: "space-around"
                  }
                }));
}

var make = ChangeColor;

exports.containerStyle = containerStyle;
exports.make = make;
/* react Not a pure module */
