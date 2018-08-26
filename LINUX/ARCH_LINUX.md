# ARCH LINUX

# INFORMATION AND LINKS 

- `PACKAGE GROUPS `- https://www.archlinux.org/groups/ | `BASE PACKAGE GROUPS` - https://www.archlinux.org/groups/x86_64/base/

- `PARTITIONING` - https://wiki.archlinux.org/index.php/Partitioning

# SETTING UP

- `ping -c 3 google.com` // up to 3 pings

- `ip link`

- we need to configure our mirror list to use the nearest and the fastest server
    - `pacman -Syy` // to update pacman database or `pacman -Syyu`

    - `pacman -S reflector` // install reflector

    - `reflector -c "India" -f 12 -l 10 -n 12 --save  /etc/pacman.d/mirrorlist` // configure mirrorlist ie. `/etc/pacman.d/mirrorlist`  to specific country

    **NOTE: REFLECTOR is a script which can retrieve the latest mirror list from the MirrorStatus page, filter the most up-to-date mirrors, sort them by speed and overwrite the file  /etc/pacman.d/mirrorlist**

- Partition the hard drive
    - `fdisk -l` // view partitions **NOTE: USE fdisk or parted TO VIEW PARTITIONS**
    - `cfdisk /dev/sda` // modify parrtitions

    Make partition bootable and write changes to disk.

    - `mkfs.ext4 /dev/sda1` // to format partition  **NOTE: ext4 file system is used - https://en.wikipedia.org/wiki/Ext4**

    - `mount /dev/sda1 /mnt` // to mount sda1   to/as /mnt

    - `lsblk` // to check MOUTNPOINT

- Install base system 
    - `pacstrap -i /mnt base base-devel` // install base system in /mnt
    **NOTE : Pacstrap is a script used to install base Package group (ie. x86 or x64)**

    - `genfstab -U -p /mnt >> /mnt/etc/fstab` // to generate fstab file. FSTAB IS A CONFIG FILE FOR PARTITIONS

    - `cat /mnt/etc/fstab` // to check fstab file

- To log in the new system as a ROOT 
    - `arch-chroot /mnt /bin/bash`

- To set the locale of your system
    - `nano /etc/local.gen` // uncomment the locale ie. `en_US.UTF-8 UTF-8` and write

    - `locale-gen` // to gelocalnerate locale
    
    - `ln -sf /usr/share/zoneinfo/India/Kolkata  /etc/localtime` // to set local time

    - `hwclock --systohc --utc`

- `echo $NAME > /etc/hostname` // Give Name to Computer 

- `nano /etc/hosts` // to edit host file
    
    127.0.0.1	localhost
    ::1		localhost
    127.0.1.1	myhostname.localdomain	myhostname

- `systemctl enable dhcpcd` // Enable DHCP

-  `passwd` // password

- INSTALL BOOTHOLDER GROUP
    - `pacman -S grub`

    - `grub-install /dev/sda` //install grub in hard drive

    - `grub-mkconfig -o /boot/grub.dfg` // to generate config file


- `exit` and `umount -R /mnt` and `reboot`

## ADD NEW USER 

-  `useradd -m -g users -G wheel -s /bin/ash $USERNAME`
- `passwd $USERNAME`

## TO ADD  USER IN SUDO GROUP

- `EDITOR=nano  visudo` and `uncomment %wheel ALL=(ALL) ALL` and save and exit

## INSTALL AUDIO PACKAGES 

- `sudo pacman -S pulseaudio  pulseaudio-alsa`

## INSTALL XORG SERVER

- `xorg xorg-xinit` and `mesa-libgl` is for integrated GPU

## INSTALL KDE DESKTOP INTERFACE

- `echo "exec startkde" > ~/.xinitrc`
- `sudo pacman -S plasma-desktop`
- `sudo pacman -S konsole dolphin firefox kate` // install additional apps

- `startx` // start GUI

## INSTALL LOGIN MANAGER

- `sudo pacman -S sddm`
- `sudo systemctl enable sddm` // enable sddm


## DHCPCD SERVICE 

- `systemctl stop dhcpcd@interface` // stop dhcpcd service


- TIME DATE STATUS 
    - `timedatectl status`

- 

