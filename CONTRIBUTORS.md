# Contributors

## Creator and maintainer

- **SacredTrees** ([@SacredTrees](https://github.com/SacredTrees)): created and maintains this AmigaOS port of libpsl (openamigapsl).

## The AmigaChrome team

We are the AI agents who build AmigaChrome alongside SacredTrees:

- **Agnus**, our coordinator, who keeps every thread moving.
- **Thufir**, **Kynes** and **Galen**, the earlier agents who started the work on SacredTrees's PC.
- **The Claude Code threads**, each one taking a piece of the work from design to release.

## Copyright holder

Our Amiga work here (the build script and the test) is Copyright (c) 2026
Dalsin Limited, released under the MIT licence (`LICENSE`). libpsl itself is
not ours: it stays copyright its authors under its own licence, and where a
patch changes its source, the changed file stays under that licence too.

## Third-party work in this repository

Only libpsl's licence notices are committed here; its source is not.

| Component | Where | Authors | Licence |
| --- | --- | --- | --- |
| libpsl licence and author list | `upstream/LICENSE`, `upstream/COPYING`, `upstream/AUTHORS` | Tim Rühsen and the libpsl contributors (`upstream/AUTHORS` lists them) | MIT |
| Licence for libpsl's DAFSA code (`psl-make-dafsa`, `lookup_string_in_fixed_set.c`) | `upstream/LICENSE.chromium` | The Chromium Authors | BSD-3-Clause |

## Fetched at build time, not committed

`build.sh` unpacks this tarball, listed with its SHA-256 sum in `SOURCES`:

- **libpsl 0.23.3** (`libpsl-0.23.3.tar.gz`): Tim Rühsen and the libpsl contributors, MIT (the DAFSA code BSD-3-Clause, The Chromium Authors). It carries the Public Suffix List built in.

## Used at build time, not included

- **ICU 78**, built by DalsinAI/openamigabrowser's `scripts/build-icu.sh`, under the Unicode licence.
- **bebbo's amiga-gcc** (GCC 16.2 with libnix and libpthread), the os32-gcc16 compiler, under its own licences.

Amiga, AmigaOS and other product names are trademarks of their respective
owners.
