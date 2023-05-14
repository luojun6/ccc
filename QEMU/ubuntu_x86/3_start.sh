qemu-system-x86_64 \
    -machine type=q35,accel=hvf \
    -smp 6 \
    -cpu host \
    -hda ubuntu2004.qcow2 \
    -m 16G \
    -vga virtio \
    -usb \
    -device usb-tablet \
    -display default,show-cursor=on -net user,hostfwd=tcp::2222-:22 -net nic
