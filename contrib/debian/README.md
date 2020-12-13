
Debian
====================
This directory contains files used to package thatsthelabord/thatsthelabor-qt
for Debian-based Linux systems. If you compile thatsthelabord/thatsthelabor-qt yourself, there are some useful files here.

## thatsthelabor: URI support ##


thatsthelabor-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install thatsthelabor-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your thatsthelaborqt binary to `/usr/bin`
and the `../../share/pixmaps/thatsthelabor128.png` to `/usr/share/pixmaps`

thatsthelabor-qt.protocol (KDE)

