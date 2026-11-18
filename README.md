# fortnite-offsets
made this for personal projects but if u need any offsets added add @identityptr on discord this project will be updated as soon as i dump game after each update if not updated dm me on discord ill update it

(updated sorry for delay haven't been active lol will update sdk later)

## New reflection SDK

The new SDK is in [`sdk-reflection/`](sdk-reflection/). It was generated from
live Fortnite reflection on 18 November 2026 and includes 34,772 native types,
191,107 property offsets, and 29,050 function names across 1,479 packages.
Start with [`sdk-reflection/SDK.hpp`](sdk-reflection/SDK.hpp), or include one
package header such as `Engine.hpp`. The existing `sdk/` folder remains available.

This SDK contains offset and name metadata. It does not claim complete C++ field
layouts or callable function signatures. See
[`sdk-reflection/README.md`](sdk-reflection/README.md) for details.
