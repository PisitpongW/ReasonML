/* Entry point */

[@bs.val] external document: Js.t({..}) = "document";

 /* We're using raw DOM manipulations here, to avoid making you read
 ReasonReact when you might precisely be trying to learn it for the first
 time through the examples later. */
let style = document##createElement("style");
document##head##appendChild(style);
style##innerHTML #= MyStyle.style;

/* Create block of name title*/
let makeName = () => {

  let name = document##createElement("div");
  name##className #= "containerTitle";

  let () = document##body##appendChild(name);
  name;
};

/* Create block of each row contains column_number columns */
let makeContainer = () => {

  let content = document##createElement("div");
  content##className #= "containerContent";

  let container_number = 3;
  let start = 1;
  for (j in start to container_number){
    let () = document##body##appendChild(content);
  };
  content;
};

/* Display name section */
ReactDOMRe.render(
  <MyName>
    {React.string("Name: Pisitpong Wongtha")}
  </MyName>,
  makeName(),
);

/* Create rows section */
let row_number = 3;
let start = 1;
for (i in start to row_number){
  ReactDOMRe.render(
    <ChangeColor />,
    makeContainer(),
  );
};

