# DogecoinEV Snap Packaging

Commands for building and uploading a DogecoinEV Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official DogecoinEV binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register dogecoinev-core
snapcraft upload \*.snap
sudo snap install dogecoinev-core
```

### Usage
```
dogecoinev-unofficial.cli # for dogecoinev-cli
dogecoinev-unofficial.d # for dogecoinevd
dogecoinev-unofficial.qt # for dogecoinev-qt
dogecoinev-unofficial.test # for test_dogecoinev
dogecoinev-unofficial.tx # for dogecoinev-tx
```

### Uninstalling
```
sudo snap remove dogecoinev-unofficial
```