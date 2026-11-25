# fortnite-offsets

made this for my own projects

ill update it whenever i dump the game after an update

## gworld / gobjects

- `gworld.hh` decrypts the current uworld pointer
- `gobjects.hh` handles the object count chunks and object pointer decryption

you can use gobjects to find objects for world esp and other stuff
it contains more than actors so check what youre reading

you can also find actors through `UWorld → Levels → Actors`

fname is for object and class names
ftext is for display text like item names

both headers are included in `decryption.hxx`

## usage

use c++20 and keep all 3 headers together

include decryption.hxx and connect your own memory reader

```cpp
#include "decryption.hxx"

// return true when the full read succeeds
bool read_memory(std::uintptr_t address, void* buffer, std::size_t size);

const auto world = FN::WorldGlobal::get(module_base, read_memory);
const auto object = FN::GObjects::object_at(module_base, index, read_memory);
```

module_base is the game base and index is the object index in gobjects

## updates

star the repo for more dumps and cool shit lmao (if u want anything added lmk)

need an offset added or something updated
dm **@identityptr** on discord

if its outdated just dm me and ill update it when i can
