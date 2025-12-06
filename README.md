# Im moving to codeberg.org. New versions of my software will be published to codeberg, not github.
## <a href="https://codeberg.org/diabloblanco">My account on CodeBerg.</a>
# Vvix(Wix) V3.1, the fifth major and first minor release of the Kernel!
(formerly called MiniState)<br>
BSD2-Licensed 32-bit monolithic(?) kernel!<br>
Vvix is designed as a kernel that can be used to create a cool OS with less efforts.<br>
Also, MiniState follows KISS.<br>
Feel free to contribute and suggesting me ideas using the "issues" page(github.com/diabloblanko/ministate/issues)!<br>
![vvix-v3.1](https://i.ibb.co/Y4Td8d6F/vvix-base.png)
## Dependencies
* clang
* nasm
* gnu ld
## Building
```
chmod +x build.sh && ./build.sh
```
You can use the -run flag to build and run in QEMU
## Where is MSH and other things you promised to add?
It will be in other repo, called baseutils(github.com/diabloblanko/baseutils), to not fill main Vvix repo with 
## Version history
V1 -> V1.1 -> V2 -> V2R -> V3 -> v3.1
## Differences between V2R and V3:
* Default cc to compile is now clang 
* Some minor changes and fixes
## Differences between V3 and V3.1
* Finally, i found a good name for this!!
* Changed MOTD
* No more mentions of MiniState 
## Inspirations
* Minix3
* OpenBSD
* Plan9
* Suckless(creating simple and small but powerfull)
* Linux
