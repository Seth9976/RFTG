// 函数名称: sub_4777c0
// 虚拟地址: 0x4777c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4777c0(int32_t arg1)
{
    // 第一条实际指令: if (*(data_27e7bbc + 0x18) != 0)
    if (*(data_27e7bbc + 0x18) != 0)
        GetFocus()
    
    float var_18
    float var_10
    
    if (data_30929dc != 0)
        if (GetCapture() == data_30785e0)
            ReleaseCapture()
        
        data_30929dc = 0
        ShowCursor(1)
        
        if (data_30929dc != 0)
            sub_4c6230(&var_10)
            var_18 = fconvert.s(fconvert.t(var_10) - fconvert.t(data_30929e0))
            var_10 = var_18
            float var_c
            float Y_1 = fconvert.s(fconvert.t(var_c) - fconvert.t(data_30929e4))
            float Y_2 = Y_1
            sub_477530(&var_10)
            sub_51ae90(&var_18, data_30929e0, data_30929e4)
            ClientToScreen(data_30785e0, &var_18)
            return SetCursorPos(var_18, Y_1)
    
    int32_t eax_10 = data_27e7fdc
    
    if ((*(eax_10 + 0xc) & 2) == 0 || *(data_27e7bbc + 0x18) == 0)
        data_27e7a6e = 0
        data_27e7a84 = fconvert.s(float.t(0))
        
        if (data_27e7a6d != 0)
            eax_10 = ShowCursor(1)
        
        data_27e7a6d = 0
        return eax_10
    
    if ((data_3161134 & 1) == 0)
        data_3161134.d |= 1
        data_316112c = 0
        data_3161130 = 0
    
    sub_4c6230(&var_18)
    float Y
    
    if (data_27e7a6d == 0)
        ShowCursor(0)
        data_316112c = var_18
        data_3161130 = Y
    else
        var_10 = fconvert.s(fconvert.t(var_18) - fconvert.t(data_316112c))
        var_18 = var_10
        float Y_3 = fconvert.s(fconvert.t(Y) - fconvert.t(data_3161130))
        long double x87_r7_9 = fconvert.t(Y_3)
        Y = Y_3
        long double x87_r6_1 = fconvert.t(var_10)
        data_27e7a84 = fconvert.s(fconvert.t(fconvert.s(x87_r7_9 * x87_r7_9 + x87_r6_1 * x87_r6_1))
            + fconvert.t(data_27e7a84))
        
        if (data_27e7a6e != 0)
            sub_477710()
        else
            long double x87_r7_14 = fconvert.t(data_27e7a84)
            long double temp0_1 = fconvert.t(25.0)
            x87_r7_14 - temp0_1
            
            if ((((x87_r7_14 < temp0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_14, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_14 == temp0_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                data_27e7a6e = 1
                sub_477710()
        
        sub_477530(&var_18)
    
    sub_51ae90(&var_18, data_316112c, data_3161130)
    ClientToScreen(data_30785e0, &var_18)
    BOOL eax_9 = SetCursorPos(var_18, Y)
    data_27e7a6d = 1
    return eax_9
}
