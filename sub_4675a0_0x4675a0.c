// 函数名称: sub_4675a0
// 虚拟地址: 0x4675a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4675a0(int32_t* arg1 @ esi, int32_t arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_38
    int32_t* eax_2 = sub_41e8e0(&var_38)
    float edx = eax_2[1]
    int32_t var_1c = *eax_2
    float edx_1 = eax_2[3]
    int32_t var_14 = eax_2[2]
    int32_t* eax_5 = *sub_466320(data_307c03c)
    long double x87_r7 = float.t(*eax_5)
    
    if (*eax_5 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_5[1])
    
    if (eax_5[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_5[2])))
    long double x87_r7_7 = fconvert.t(fconvert.s(fconvert.t(edx_1) - fconvert.t(edx)))
    long double x87_r6_6 = float.t(1)
    long double x87_r7_11 = fconvert.t(fconvert.s(x87_r6_6 / x87_r6_6))
    float var_28_2 = fconvert.s(x87_r7_11 * fconvert.t(fconvert.s(x87_r7_7
        * fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))))))
    float var_4c = var_28_2
    int32_t* eax_7
    int80_t result
    result, eax_7 = sub_466770(&var_38, arg3, arg2, arg2, fconvert.s(fconvert.t(25f)), var_28_2, 
        fconvert.s(x87_r7_11 * fconvert.t(fconvert.s(x87_r7_7
            * fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1))))))))
    int32_t edx_4 = eax_7[1]
    *arg1 = *eax_7
    int32_t ecx_5 = eax_7[2]
    arg1[1] = edx_4
    int32_t edx_5 = eax_7[3]
    arg1[2] = ecx_5
    arg1[3] = edx_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
