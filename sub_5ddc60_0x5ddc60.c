// 函数名称: sub_5ddc60
// 虚拟地址: 0x5ddc60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5ddc60(PWSTR arg1)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    int32_t eax = sub_5dda20(arg1, ENUM_CURRENT_SETTINGS, &var_18)
    
    if (eax == 0)
        return eax
    
    int32_t __saved_ebx = 0x40
    int32_t eax_1 = sub_5d0ac0()
    
    if (eax_1 == 0)
        return eax_1
    
    int32_t __saved_ebx_1 = 0x40
    PWSTR var_3b4_1 = arg1
    int32_t var_3b8 = eax_1
    sub_5cd110()
    int32_t var_3bc = 0x44
    int32_t var_3c0 = 0
    int32_t var_5c
    int32_t* var_3c4 = &var_5c
    sub_5cd100()
    DISPLAY_DEVICEW displayDevice
    displayDevice.cb = 0x348
    
    if (EnumDisplayDevicesW(arg1, 0, &displayDevice, 0) != 0)
        var_360
        int32_t var_3b4_3 = sub_5cd1d0(&var_360) * 2 + 2
        void* var_3b8_1 = &var_360
        var_5c = sub_5dd160("UTF-8", "UTF-16LE")
    
    int32_t eax_5 = var_18
    int32_t var_4c = eax_5
    int32_t var_38 = eax_5
    int32_t var_14
    int32_t var_48 = var_14
    int32_t var_10
    int32_t var_44 = var_10
    int32_t var_c
    int32_t var_40 = var_c
    int32_t var_8
    int32_t var_3c = var_8
    int32_t var_34 = var_14
    int32_t var_30 = var_10
    int32_t var_2c = var_c
    int32_t var_28 = var_8
    int32_t var_1c = eax_1
    sub_5c8d80(&var_5c)
    int32_t var_3b8_2 = var_5c
    sub_5d0af0()
    return 1
}
