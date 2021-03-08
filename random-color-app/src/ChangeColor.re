/* Entry color changing section */

/* Import random color module */
open RandomColorRe;

/* Create style of container that contains columns */
let containerStyle = ReactDOMRe.Style.make(~display="flex", ~alignItems="center", ~height="120px", ());

[@react.component]
let make = () => {
    /* Container */
  <div style=containerStyle>
  
    <view style={ReactDOMRe.Style.make(
      ~height="120px",
      ~width="120px",
      ~display="flex",
      ~alignItems="center",
      ~justifyContent="space-around",
      ~backgroundColor= randomColor(),
      ~margin="40px",
      ~borderRadius="12px 12px 12px 12px",
      ~boxShadow= "0px 4px 16px rgb(200, 200, 200)",
      (),
    )}>
      
    </view>

    <view style={ReactDOMRe.Style.make(
      ~height="120px",
      ~width="120px",
      ~display="flex",
      ~alignItems="center",
      ~justifyContent="space-around",
      ~backgroundColor= randomColor(),
      ~margin="40px",
      ~borderRadius="12px 12px 12px 12px",
      ~boxShadow= "0px 4px 16px rgb(200, 200, 200)",
      (),
    )}>
      
    </view>

    <view style={ReactDOMRe.Style.make(
      ~height="120px",
      ~width="120px",
      ~display="flex",
      ~alignItems="center",
      ~justifyContent="space-around",
      ~backgroundColor= randomColor(),
      ~margin="40px",
      ~borderRadius="12px 12px 12px 12px",
      ~boxShadow= "0px 4px 16px rgb(200, 200, 200)",
      (),
    )}>
      
    </view>

  </div>;
};