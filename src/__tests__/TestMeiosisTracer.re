open MeiosisTracer;
open Flyd;
open Jest;
open ExpectJs;

describe("MeiosisTracer", () =>
  test("#trace", () =>
    expect(() => {
      let stream = stream();
      let streams = [|stream|];
      trace(~selector="#app", ~streams, ());
    })
    |> not
    |> toThrow
  );
);