open Jest;
open Expect;
open CssNative;
open ReactNative;

test("snapshot", () => {
  let style = style([color(hex("F0F")), fontSize(20), height(px(500))]);

  <Text style> {"test" |> React.string} </Text>
  |> ReactTestRenderer.create
  |> ReactTestRenderer.toJSON
  |> expect
  |> toMatchSnapshot;
});
