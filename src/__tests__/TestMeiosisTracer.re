open MeiosisTracer;
open Flyd;
open Jest;
open ExpectJs;

describe("MeiosisTracer", () =>
  test("#trace", () =>
    expect(() => {
      let strm = stream();
      let streams = [|strm|];
      trace(~selector="#app", ~streams, ());
    })
    |> not
    |> toThrow
  )
);