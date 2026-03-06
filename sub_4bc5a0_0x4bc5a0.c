// 函数名称: sub_4bc5a0
// 虚拟地址: 0x4bc5a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4bc5a0(int32_t arg1, int32_t arg2, float arg3, int16_t* arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t* eax_1
    int32_t* eax_1
    int32_t edx
    eax_1, edx = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t edi_1 = arg2 * 0x118
    void var_14
    int32_t* eax_4 = sub_4f4990(&var_14, edx, *eax_1 + edi_1 + 0x1c, &var_14, arg3)
    int32_t edx_1 = eax_4[1]
    float var_24 = *eax_4
    int32_t var_20 = edx_1
    int32_t* edx_2 = eax_4[3]
    int32_t var_1c = eax_4[2]
    int32_t* var_18 = edx_2
    
    if (arg6 != 0)
        if (*(arg4 + 1) != 0)
            *(arg4 + 0xc) = fconvert.s(fconvert.t(*(arg4 + 0xc))
                + fconvert.t(fconvert.s(fconvert.t(arg5[1]) - fconvert.t(*(arg4 + 8)))))
            *(arg4 + 4) = *arg5
            edx_2 = arg5[1]
            *(arg4 + 8) = edx_2
        else if (*arg4 == 0)
            edx_2 = arg5
            
            if (sub_4057a0(&var_24, edx_2) != 0)
                *(arg4 + 4) = *arg5
                edx_2 = arg5[1]
                *(arg4 + 1) = 1
                *(arg4 + 8) = edx_2
        
        *arg4 = 1
    else
        *arg4 = 0
    
    float eax_10
    float edx_3
    eax_10, edx_3 = sub_4fafb0(arg2, edx_2, arg1, arg3)
    float var_c = eax_10
    void var_34
    int32_t* eax_15 = sub_4f4990(arg3, &var_34, 
        *sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4)) + edi_1 + 0x1c, &var_34, arg3)
    long double x87_r7_6 = fconvert.t(eax_15[3]) - fconvert.t(eax_15[1])
    var_24 = *eax_15
    int32_t var_1c_1 = eax_15[2]
    long double x87_r7_8 = fconvert.t(fconvert.s(x87_r7_6)) - fconvert.t(edx_3)
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7_8
    eax_15.w = (x87_r6 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_8 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_15:1.b & 0x41) != 0)
        x87_r6 = x87_r7_8
    
    arg6.d = fconvert.s(x87_r7_8)
    long double x87_r6_3 = float.t(0)
    long double temp1 = fconvert.t(*(arg4 + 0xc))
    x87_r6_3 - temp1
    eax_15.w = (x87_r6_3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, temp1) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        arg6.d = fconvert.s(x87_r6 - fconvert.t(*(arg4 + 0xc)))
        *(arg4 + 0xc) = fconvert.s(fconvert.t(arg6.d) * fconvert.t(0.5) + fconvert.t(*(arg4 + 0xc)))
        return 
    
    long double x87_r7_14 = fconvert.t(*(arg4 + 0xc))
    long double x87_r6_4 = fconvert.t(arg6.d)
    x87_r6_4 - x87_r7_14
    eax_15.w = (x87_r6_4 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_4, x87_r7_14) ? 1 : 0) << 0xa | (x87_r6_4 == x87_r7_14 ? 1 : 0) << 0xe
        | 0x3000
    
    if ((eax_15:1.b & 0x41) != 0)
        return 
    
    arg6.d = fconvert.s(x87_r7_14 - fconvert.t(*(arg4 + 0xc)))
    *(arg4 + 0xc) = fconvert.s(fconvert.t(arg6.d) * fconvert.t(0.5) + fconvert.t(*(arg4 + 0xc)))
}
