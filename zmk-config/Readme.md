west build --pristine -b seeeduino_xiao_ble -d $HOME/Keyboard/my_keyboards/zmk-config/build/mks_iris_right -- -DSHIELD=msk_iris_right -DZMK_CONFIG=$HOME/Keyboard/my_keyboards/zmk-config
west build --pristine -b seeeduino_xiao_ble -d $HOME/Keyboard/my_keyboards/zmk-config/build/mks_iris_left -- -DSHIELD=msk_iris_left -DZMK_CONFIG=$HOME/Keyboard/my_keyboards/zmk-config
