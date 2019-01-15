# bs-meiosis-tracer

Bucklescript bindings for [Meiosis tracer 2.0](https://meiosis.js.org/tracer/) to trace stream state changes from Chrome browser extension.

Trace, rewind, and replay snapshots of streams

- [meisois tracer repo](https://github.com/foxdonut/meiosis-tracer)

## Writing bindings

To help write bucklescript bindings for this lib (and hence make it usable from ReasonML) see the [FFI cheatsheet](https://github.com/glennsl/bucklescript-ffi-cheatsheet) and go for it!

## Use

Meiosis tracer can be used with [Meiosis](https://meiosis.js.org/) and many types of streams libraries, including:

- [bs-flyd](https://github.com/kristianmandrup/bs-flyd)
- [bs-mithril-stream](https://github.com/kristianmandrup/bs-mithril-stream) from Mithril
- [xstream](https://gitlab.com/j3a-solutions/bs-xstream) of Cycle.js fame

[Full example app (WIP)](https://github.com/kristianmandrup/reasonml-meiosis-examples)

### Install

`npm i bs-meiosis-tracer`

Add `bs-meiosis-tracer` to `dependencies` in `bsconfig.json`

## Api

See [Meiosis tracer docs](https://meiosis.js.org/tracer/)

### Api changes

We might have to export and bind to a `trace` function and not the default export?

### Usage

```js
open MeiosisTracer;
open Flyd;
let stream = stream();
let streams = [|stream|];
trace(~selector="#app", ~streams, ());
```

## Build

```
npm run build
```

## Watch

```
npm run watch
```

## Editor

If you use `vscode`, Press `Windows + Shift + B` it will build automatically
