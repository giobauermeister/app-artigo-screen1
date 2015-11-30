#!/bin/bash
ts_calibrate
export QT_QPA_EGLFS_HIDECURSOR=1
export QT_QPA_EGLFS_FB=/dev/fb0
screen1 -platform eglfs
export QT_QPA_EGLFS_FB=/dev/fb2
screen2 -platform eglfs
