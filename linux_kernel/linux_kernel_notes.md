## 00 inux Kernel Overview

### 00-01 Prerequisites and takeways

**What You Should know**

- Be familiar with the Linux
- Be familiar with C programming
- Know how to edit files on Linux

**The Setup**

- Linux machine with root access availble
- Virtual machine could be helpful (In case somethong damages happen)
- Ensure the safety of you data befor econtinuing

### 00-02 What is Linux Kernel

**The Kernel is a Program**

- Often with a name link vmlinuz<KERNEL\*\*VERSION>
- Loaded a run by a boot loader, like GRUB
- Has command-line parameters

**The Kernel is an API**

- System calls
- Virtual file system entries
  - proc
  - sys
  - debugfs
- Device files (system calls)

**The Kernel is a Gatekeeper**

- Enforces privileges (capabilities)
- Executes supervisor intructions
- Implements security policies
- Controls access to hardware and other resources

**The Kernel is Modular**

- Kernel image is relative small
- Kernel image is sufficient to boot to user space
- Optional functionality is added after booting
- It allows for alternatives; for example, loading only divers required for present hardware

### 00-03 Where is Linux Kernel

```sh
cd /boot
```

```sh
uname -r
```

```=>
5.15.0-52-generic
```

```sh
ls -l /boot/vmlinuz-5.15.0-52-generic
```

```=>
-rw------- 1 root root 11442496 Oct 13 2022 /boot/vmlinuz-5.15.0-52-generic
```

This file will be loaded by GRUB to memory during the bootloading.

## 01 Surveying the Linux Kernel

### 01-01 Discover and Control Hardware

[Application] <-> [Library](Std C Lib) <-> [Kernel] <-> [Hardware](disk|keyboard|mouse)

**The Software Layers to and from Hardware**

- Applications call functions in libraries. Some of those functions invoke kernel system calls.
- Some system calls interact with hardware

**Commands for HW info**

- `lshw` and `lspci`
- `lsusb` and `lsbk`
- `lscpu` and `lsdev`

Notes: Not all Linux distros have these commands available

**Cmds for HW Control and Conifg**

- `hdparm`
- Write (e.g., `echo`) to `proc`, `dev`, or `sys files`
- `inb` and `outb`
- `setpci`

**_Try_**
