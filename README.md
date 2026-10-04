# openamigapsl

libpsl (the Public Suffix List) for AmigaOS 3.x on 68k, built as static link libraries for
GCC programs. Part of the [OpenAmiga](https://github.com/DalsinAI/openamiga)
ports, made for [OpenBrowser](https://github.com/DalsinAI/openamigabrowser),
the WebKit browser for AmigaOS 3.2.

**Status:** Working: builds, and the smoke test passes on the bench.

This repository holds the Amiga build, not libpsl itself: a build script,
a smoke test and the upstream licences.

## Upstream

| Library | Version | Licence | Home |
| --- | --- | --- | --- |
| libpsl | 0.23.3 | MIT (upstream/LICENSE, upstream/COPYING) | https://github.com/rockdaboot/libpsl |

The exact files and their SHA-256 sums are in [SOURCES](SOURCES). All credit
for the library goes to its authors; see `upstream/` for their notices.

## What the Amiga port changes

- No source changes. The built-in public suffix list from the tarball is compiled in, and international names go through ICU 78 (the ICU build from DalsinAI/openamigabrowser's `scripts/build-icu.sh`).

## Building

You need the os32-gcc16 compiler (bebbo's amiga-gcc on GCC 16.2 with libnix
and libpthread; see DalsinAI/openamigabrowser `stove/`) and the upstream
tarballs from [SOURCES](SOURCES) in `tarballs/`. Then:

```
./build.sh
```

The libraries and headers land in `out/` (set `PREFIX` to change that). The
script prints which other settings it needs, if any. Target: 68020 or better
with an FPU (`-m68020 -m68881`), libnix (`-mcrt=nix20`).

Link with: `-lpsl -licuuc -licudata -lstdc++ -lm`

## Tested

`tests/psltest.c`, run on AmigaOS 3.2.3 on AmigaChrome's AC090 emulation (68040 with FPU, 256 MB), Instance-24, 4 October 2026, as `psltest`:

```
PSL 0.23.3 (+libicu/78.3) builtin=yes rules=10231
co.uk public=1 registrable=(none)
bbc.co.uk public=0 registrable=bbc.co.uk
www.bbc.co.uk public=0 registrable=bbc.co.uk
com public=1 registrable=(none)
login.live.com public=0 registrable=live.com
github.io public=1 registrable=(none)
x.github.io public=0 registrable=x.github.io
amiga.org public=0 registrable=amiga.org
```

It has not yet been run on real Amiga hardware.

## Known issues

- None known.

## Licence

Dalsin Limited's Amiga changes (the build script, patches, configuration
headers and tests) are MIT, Copyright (c) 2026 Dalsin Limited: see
[LICENSE](LICENSE). libpsl keeps its own licence, in
[upstream/](upstream/); a patch to its source stays under that licence.
