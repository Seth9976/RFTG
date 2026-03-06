// 函数名称: sub_521670
// 虚拟地址: 0x521670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_521670(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if (eax == 8)
        return arg1[2]
    
    if (eax != 7)
        int16_t var_7_1 = 0
        char var_5_1 = 0
        return 0.d
    
    int32_t eax_2
    long double st0
    st0, eax_2 = sub_465dd0(fconvert.s(fconvert.t(arg1[5])), fconvert.s(float.t(0)), 
        fconvert.s(fconvert.t(255f)))
    long double x87_r7_4 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(st0))
    x87_r6 - x87_r7_4
    eax_2.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_1
    
    if (p)
        x87_r6_1 = x87_r6 + fconvert.t(0.5)
    else
        x87_r6_1 = x87_r6 - fconvert.t(0.5)
    
    char eax_3 = sub_685f40(x87_r6_1)
    int32_t eax_4
    long double st0_1
    st0_1, eax_4 =
        sub_465dd0(fconvert.s(fconvert.t(arg1[4])), fconvert.s(x87_r7_4), fconvert.s(fconvert.t(255f)))
    long double x87_r7_7 = float.t(0)
    long double x87_r6_3 = fconvert.t(fconvert.s(st0_1))
    x87_r6_3 - x87_r7_7
    eax_4.w = (x87_r6_3 < x87_r7_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_7) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_7 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r6_4
    
    if (p_1)
        x87_r6_4 = x87_r6_3 + fconvert.t(0.5)
    else
        x87_r6_4 = x87_r6_3 - fconvert.t(0.5)
    
    char eax_5 = sub_685f40(x87_r6_4)
    int32_t eax_6
    int80_t st0_2
    st0_2, eax_6 =
        sub_465dd0(fconvert.s(fconvert.t(arg1[3])), fconvert.s(x87_r7_7), fconvert.s(fconvert.t(255f)))
    char var_8
    var_8.d = fconvert.s(st0_2)
    long double x87_r7_10 = float.t(0)
    long double x87_r6_6 = fconvert.t(var_8.d)
    x87_r6_6 - x87_r7_10
    eax_6.w = (x87_r6_6 < x87_r7_10 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_6, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_6 == x87_r7_10 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    long double x87_r6_7
    
    if (p_2)
        x87_r6_7 = x87_r6_6 + fconvert.t(0.5)
    else
        x87_r6_7 = x87_r6_6 - fconvert.t(0.5)
    
    char eax_7 = sub_685f40(x87_r6_7)
    int32_t eax_8
    int80_t st0_3
    st0_3, eax_8 =
        sub_465dd0(fconvert.s(fconvert.t(arg1[2])), fconvert.s(x87_r7_10), fconvert.s(fconvert.t(255f)))
    var_8.d = fconvert.s(st0_3)
    long double x87_r7_13 = float.t(0)
    long double x87_r6_9 = fconvert.t(var_8.d)
    x87_r6_9 - x87_r7_13
    eax_8.w = (x87_r6_9 < x87_r7_13 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_9, x87_r7_13) ? 1 : 0) << 0xa
        | (x87_r6_9 == x87_r7_13 ? 1 : 0) << 0xe | 0x3000
    bool p_3 = unimplemented  {test ah, 0x5}
    long double x87_r7_14
    
    if (p_3)
        x87_r7_14 = x87_r7_13 + fconvert.t(0.5)
    else
        x87_r7_14 = x87_r7_13 - fconvert.t(0.5)
    
    int16_t var_7
    var_7:1.b = eax_5
    var_7.b = eax_7
    char var_5 = eax_3
    return sub_685f40(x87_r7_14).d
}
