#!/usr/bin/env fish

mkdir qmk_firmware/keyboards/splitkb/aurora/sweep/keymaps/twoneis/
cp keymap.c qmk_firmware/keyboards/splitkb/aurora/sweep/keymaps/twoneis/; or return
cp rules.mk qmk_firmware/keyboards/splitkb/aurora/sweep/; or return
qmk compile -kb splitkb/aurora/sweep -km twoneis; or return
mv qmk_firmware/splitkb_aurora_sweep_rev1_twoneis_liatris.uf2 keymap.uf2; or return
