
Debian
====================
This directory contains files used to package dogecoinevd/dogecoinev-qt
for Debian-based Linux systems. If you compile dogecoinevd/dogecoinev-qt yourself, there are some useful files here.

## dogecoinev: URI support ##


dogecoinev-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install dogecoinev-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your dogecoinev-qt binary to `/usr/bin`
and the `../../share/pixmaps/dogecoinev128.png` to `/usr/share/pixmaps`

dogecoinev-qt.protocol (KDE)

