#!/usr/bin/env fish

cp keymap.c qmk_firmware/keyboards/splitkb/aurora/sweep/keymaps/twoneis/
qmk compile
mv qmk_firmware/splitkb_aurora_sweep_rev1_twoneis_liatris.uf2 keymap.uf2