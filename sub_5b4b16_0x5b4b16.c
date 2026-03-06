// 函数名称: sub_5b4b16
// 虚拟地址: 0x5b4b16
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5b4b16(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, double arg7, int16_t arg8)
{
    // 第一条实际指令: int32_t eax = 0
    int32_t eax = 0
    int32_t eax_1
    
    while (true)
        if (*((eax << 3) + &data_8b9018) == arg2)
            eax_1 = (&data_8b901c)[eax * 2]
            break
        
        eax += 1
        
        if (eax s>= 0x1d)
            eax_1 = 0
            break
    
    int32_t var_20 = eax_1
    int16_t x87control
    
    if (eax_1 == 0)
        sub_5b4e31(x87control, arg8, 0xffff)
        sub_5b4ab5(arg1)
        return fconvert.t(arg7)
    
    int32_t var_1c = arg3
    int32_t var_18 = arg4
    int32_t var_14 = arg5
    int32_t var_10 = arg6
    int32_t var_24 = arg1
    int32_t var_8 = arg7:4.d
    sub_5b4e31(x87control, arg8, 0xffff)
    int32_t* var_34 = &var_24
    sub_5b4ab5(arg1)
    return fconvert.t(arg7.d.q)
}
