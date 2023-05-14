qemu-system-x86_64 \
    -m 64G \
    -vga virtio \
    -display default,show-cursor=on \
    -usb \
    -device usb-tablet \
    -smp 2 \
    # -cdrom manjaro-gnome-22.1.0-230421-linux61.iso \
    -drive file=manjaro.qcow2,if=virtio \
    -cpu host \
    -machine type=q35,accel=hvf