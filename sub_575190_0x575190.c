// 函数名称: sub_575190
// 虚拟地址: 0x575190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_575190(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_27e7fdc
    int32_t eax = data_27e7fdc
    
    if ((*(eax + 0xc) & 2) == 0 || *(data_27e7bbc + 0x18) == 0)
        if (data_273ac1a != 0)
            eax = ShowCursor(1)
        
        data_273ac1a = 0
        return eax
    
    if ((data_3161140 & 1) == 0)
        data_3161140.d |= 1
        data_3161138 = 0
        data_316113c = 0
    
    float var_10
    sub_4c6230(&var_10)
    float var_18
    float Y
    float var_c
    
    if (data_273ac1a == 0)
        ShowCursor(0)
        data_3161138 = var_10
        data_316113c = var_c
    else
        var_18 = fconvert.s(fconvert.t(var_10) - fconvert.t(data_3161138))
        var_10 = var_18
        Y = fconvert.s(fconvert.t(var_c) - fconvert.t(data_316113c))
        float Y_1 = Y
        sub_477530(&var_10)
    sub_51ae90(&var_18, data_3161138, data_316113c)
    ClientToScreen(data_30785e0, &var_18)
    BOOL eax_4 = SetCursorPos(var_18, Y)
    data_273ac1a = 1
    return eax_4
}
