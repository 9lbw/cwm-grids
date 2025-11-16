# cwm-grids

cwm-grids is a small fork of cwm for X11 that adds optional grid snapping when
moving and resizing windows.

## Repositories

- Upstream cwm: https://github.com/leahneukirchen/cwm  
- This fork: https://github.com/9lbw/cwm-grids  

Most behaviour and documentation from upstream cwm still apply; this fork only
adds a simple grid-based movement and resize mode.

## Features

In addition to upstream cwm, cwm-grids provides:

- Optional grid snapping when moving windows with the keyboard or mouse.
- Optional grid snapping when resizing windows with the keyboard.
- A configurable grid size in pixels (`gridsize`), default 32.
- Two helper functions, `grid-step-up` and `grid-step-down`, to adjust the
  grid size at runtime via key bindings.

## Building

Dependencies:

- pkg-config
- Xft
- Xinerama
- Xrandr

The included `Makefile` should work with both GNU make and BSD make. On a
typical system:

```sh
make
sudo make install
```

This fork only changes window movement and resize behaviour and uses the same
build system as upstream cwm.

## Configuration

cwm-grids extends the `cwmrc(5)` configuration with two options and two bindable
functions.

Options:

- `gridsnap yes|no`  
  Enable or disable snapping of moves and resizes to a fixed grid.

- `gridsize N`  
  Set the grid size in pixels (`N >= 1`). Default is 32.

Functions (usable with `bind-key` / `bind-mouse`):

- `grid-step-up`  
  Increase `gridsize` by a small step.

- `grid-step-down`  
  Decrease `gridsize` by a small step (not below a minimum).

Example `~/.cwmrc` snippet:

```text
# enable grid snapping and set default grid size
gridsnap yes
gridsize 32

# example key bindings to tweak the grid
bind-key CM-bracketleft  grid-step-down
bind-key CM-bracketright grid-step-up
```

All other options and bindings are as described in upstream `cwmrc(5)`.

## Further documentation

For general usage, key bindings, and configuration, refer to the upstream
manual pages and documentation:

- `cwm(1)` and `cwmrc(5)` manpages (from your system packages or OpenBSD).
- OpenBSD cwm page:  
  http://cvsweb.openbsd.org/cgi-bin/cvsweb/xenocara/app/cwm/
- Upstream releases:  
  http://leahneukirchen.org/releases

## License

cwm-grids is derived from cwm and retains the same ISC-style license as
upstream. See the source files for license terms.
