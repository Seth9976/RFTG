// 函数名称: sub_5a5d70
// 虚拟地址: 0x5a5d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a5d70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, float arg7, float arg8, float arg9, float arg10)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg7)
    long double x87_r7 = fconvert.t(arg7)
    float var_c0 = fconvert.s(x87_r7)
    long double x87_r6 = fconvert.t(arg8)
    float var_bc = fconvert.s(x87_r6)
    int32_t var_dc = arg2
    long double x87_r5 = fconvert.t(arg9)
    float var_b8 = fconvert.s(x87_r5)
    long double x87_r4 = fconvert.t(arg10)
    int32_t var_c8 = arg6
    float var_b4 = fconvert.s(x87_r4)
    int32_t var_d8 = arg3
    int32_t var_cc = arg5
    int32_t var_a0 = 4
    long double x87_r3_2 = fconvert.t(fconvert.s(float.t(arg5)))
    long double x87_r2_5 = fconvert.t(fconvert.s(float.t(arg6)))
    long double x87_r7_1 = x87_r7 * x87_r3_2
    float var_b0 = fconvert.s(x87_r7_1 / x87_r7_1)
    long double x87_r6_1 = x87_r6 * x87_r2_5
    float var_ac = fconvert.s(x87_r6_1 / x87_r6_1)
    long double x87_r7_5 = float.t(1)
    long double temp1 = fconvert.t(fconvert.s(x87_r3_2 / float.t(arg2) / (x87_r5 - x87_r7)))
    x87_r7_5 - temp1
    int32_t eax_1
    eax_1.w = (x87_r7_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    int32_t eax_2
    
    eax_2 = p ? 0 : 1
    
    long double temp2 = fconvert.t(fconvert.s(x87_r2_5 / float.t(arg3) / (x87_r4 - x87_r6)))
    x87_r7_5 - temp2
    int32_t eax_3 = neg.d(eax_2)
    int32_t eax_4
    eax_4.w = (x87_r7_5 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp2) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp2 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    int32_t eax_5
    
    eax_5 = p_1 ? 0 : 1
    
    int32_t eax_6 = neg.d(eax_5)
    int32_t var_90 = sbb.d(eax_3, eax_3, eax_2 != 0) + 5
    int32_t var_8c = sbb.d(eax_6, eax_6, eax_5 != 0) + 5
    void var_e0
    uint32_t eax_9 = sub_5a5960(&var_e0)
    int32_t eax_10 = sub_5a881a(eax_9)
    
    if (eax_10 == 0)
        return eax_10
    
    int32_t eax_11 = sub_5a5b10(&var_e0, arg1, arg4, eax_9)
    __free_base(eax_10)
    return eax_11
}
