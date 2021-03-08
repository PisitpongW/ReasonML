let reasonReactBlue = "#48a9dc";

// The {j|...|j} feature is just string interpolation, from
// bucklescript.github.io/docs/en/interop-cheatsheet#string-unicode-interpolation
// This allows us to conveniently write CSS, together with variables, by
// constructing a string
let style = {j|
  body {
    background-color: rgb(224, 226, 229);
    display: flex;
    flex-direction: column;
    align-items: center;
  }
  .container {
    background-color: rgb(224, 226, 229);
    margin: 50px 0px;
    box-shadow: 0px 4px 16px rgb(200, 200, 200);
    width: 600px;
    height: 120px;
    border-radius: 12px;
    font-family: sans-serif;
    display: flex;
    flex-direction: row;
    align-items: center;
  }
  .containerTitle {
    background-color: rgb(242, 243, 245);
    box-shadow: 0px 4px 16px rgb(200, 200, 200);
    border-radius: 12px 12px 12px 12px;
    padding: 12px;
    font-family: sans-serif;
    font-weight: bold;
    margin: 30px 0px;
  }
  .containerContent {
    background-color: rgb(224, 226, 229);
    padding: 16px;
    border-radius: 12px 12px 12px 12px;
    display: flex;
    flex-direction: row;
    align-items: center;
    margin: 20px 0px;
    font-weight: bold;
    font-family: sans-serif;
  }
|j};
