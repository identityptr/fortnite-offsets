# New reflection SDK

Generated from live Fortnite reflection on 18 November 2026. The package headers
cover 34,772 native classes and structs, 191,107 reflected property offsets,
and 29,050 function names. `manifest.json` records the exact inventory hashes.

Include `SDK.hpp` for all packages, or include a package header directly:

```cpp
#include "Engine.hpp"

constexpr auto persistent_level =
    FN::SDK::Engine::World::Offsets::PersistentLevel;
```

Add `sdk-reflection/` to your compiler's include path. Property kinds and
function names are metadata; these headers do not provide full memory layouts,
bit masks, parameter types, or callable function wrappers. Native-only offsets
remain in the repository's `offsets.hxx`.
