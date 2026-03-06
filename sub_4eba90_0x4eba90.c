// 函数名称: sub_4eba90
// 虚拟地址: 0x4eba90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_4eba90(int32_t* arg1, void* arg2, long double arg3 @ st0)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_4eb7e0(arg1, *(arg2 + 0x30))
    long double x87_r0 = fconvert.t(*(arg2 + 0x10))
    long double x87_r7 = fconvert.t(*(arg2 + 0xc))
    long double x87_r6 = fconvert.t(*(arg2 + 0x14))
    long double x87_r0_6 = fconvert.t(fconvert.s(x87_r0 * x87_r0 + x87_r7 * x87_r7 + x87_r6 * x87_r6))
        * fconvert.t(fconvert.s(arg3)) * fconvert.t(*(*(*(arg2 + 0x30) + 0x2e4) + 0x58))
    long double x87_r7_4 = float.t(1)
    x87_r7_4 - x87_r0_6
    void* eax_2
    eax_2.w = (x87_r7_4 < x87_r0_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, x87_r0_6) ? 1 : 0) << 0xa
        | (x87_r7_4 == x87_r0_6 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        x87_r0_6 = x87_r7_4
    
    float var_18_1 = fconvert.s(x87_r0_6)
    float var_2c
    float* eax_3 = sub_4132a0(arg2 + 0xc, &var_2c)
    float ecx_1 = eax_3[1]
    long double x87_r7_5 = fconvert.t(var_18_1)
    float edx_2 = eax_3[2]
    var_2c = fconvert.s(fconvert.t(*eax_3) * x87_r7_5)
    float var_28 = fconvert.s(fconvert.t(ecx_1) * x87_r7_5)
    float var_24 = fconvert.s(x87_r7_5 * fconvert.t(edx_2))
    *(arg2 + 0xc) = fconvert.s(fconvert.t(*(arg2 + 0xc)) - fconvert.t(var_2c))
    *(arg2 + 0x10) = fconvert.s(fconvert.t(*(arg2 + 0x10)) - fconvert.t(var_28))
    *(arg2 + 0x14) = fconvert.s(fconvert.t(*(arg2 + 0x14)) - fconvert.t(var_24))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
