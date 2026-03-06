// 函数名称: sub_426b10
// 虚拟地址: 0x426b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_426b10(int32_t* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: void* eax_2
    void* eax_2
    
    if (*arg1 != 1)
        eax_2 = &arg1[3]
    else
        eax_2 = sub_418870(arg1[0x1f]) + 0xc
    
    int32_t* eax_3 = sub_4265b0(eax_2)
    int32_t var_14 = eax_3[1]
    int32_t edx_1 = eax_3[3]
    float var_18 = *eax_3
    int32_t var_c = edx_1
    int32_t var_10 = eax_3[2]
    int32_t eax_4 = sub_426870(arg1, 0)
    bool cond:1 = *arg1 != 1
    long double x87_r6 = fconvert.t(1000.0)
    arg1[0x29] = eax_4
    float var_8_1 = fconvert.s(x87_r6 - float.t(eax_4))
    
    if (not(cond:1))
        var_8_1 = fconvert.s(fconvert.t(var_8_1) - x87_r6)
    
    int32_t eax_5 = arg1[0x17]
    long double x87_r7_4 = fconvert.t(2000.0)
    
    if (eax_5 == 0x1b || eax_5 == 0x1c)
        var_8_1 = fconvert.s(fconvert.t(var_8_1) - x87_r7_4)
    
    if (eax_5 == 0x12 || eax_5 == 0x13)
        var_8_1 = fconvert.s(fconvert.t(var_8_1) - x87_r7_4)
    
    void arg_4
    
    if (sub_4057a0(&var_18, &arg_4).b == 0)
        return 
    
    long double x87_r7_6 = fconvert.t(var_8_1)
    long double x87_r6_4
    
    if (*arg2 != 0)
        x87_r6_4 = fconvert.t(arg2[7])
        x87_r6_4 - x87_r7_6
    
    if (*arg2 != 0 && (((x87_r6_4 < x87_r7_6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
        return 
    
    *arg2 = 0xe
    int32_t eax_7 = arg1[0x2b]
    arg2[7] = fconvert.s(x87_r7_6)
    arg2[1] = eax_7
}
