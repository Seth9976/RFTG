// 函数名称: sub_50d8d0
// 虚拟地址: 0x50d8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_50d8d0(int32_t arg1, int32_t arg2, float* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_510b30(arg3, arg2)
    int32_t eax_4
    int32_t edx
    eax_4, edx = sub_50c140(*eax_3)
    int32_t* ebx_2 = arg4 * 0xb8 + *eax_4
    float var_78 = ebx_2
    int128_t* eax_6 = sub_50c830(arg4, edx, eax_3)
    void var_ec
    int32_t var_ac
    __builtin_memcpy(&var_ec, sub_50c2d0(eax_6, &var_ac, ebx_2, &var_ac, eax_6), 0x28)
    void* esi_2 = eax_6 + 0x484
    
    if (eax_6[0x48].d s<= *(eax_6 + 0x5c))
        esi_2 = &ebx_2[2]
    
    __builtin_memcpy(&var_ac, esi_2, 0x24)
    float var_54
    __builtin_memcpy(&var_54, &var_ac, 0x24)
    float var_48
    float var_1c
    float* eax_9 = sub_465b90(&var_1c, &var_48)
    int32_t edx_2 = eax_9[1]
    float var_50 = *eax_9
    var_54 = fconvert.s(float.t(1))
    float ecx_4 = eax_9[2]
    int32_t var_4c = edx_2
    float edx_3 = eax_9[3]
    int32_t eax_10 = var_ac
    var_48 = ecx_4
    float var_44 = edx_3
    void var_2c
    __builtin_memcpy(&var_2c, &var_54, 0x20)
    sub_405f60(&var_54, eax_6 + 0x3c)
    float var_d0
    float var_68 = fconvert.s(fconvert.t(var_d0))
    __builtin_memcpy(arg5, &var_54, 0x20)
    float var_c8
    float var_64_1 = fconvert.s(fconvert.t(var_c8))
    float var_14 = var_68
    float var_10 = var_64_1
    sub_405e30(&var_44, &var_14, &data_840a00)
    float var_70 = var_44
    int32_t var_6c = eax_10
    int32_t var_a4
    int32_t var_64_2 = var_a4
    int32_t* eax_14 = eax_6[6].d
    int32_t var_a8
    int32_t var_68_1 = var_a8
    
    if (eax_14 == 0)
        eax_14 = *(var_78 i+ 0x74)
    
    void* eax_15 = sub_4f4890(eax_14)
    float edx_9 = *(eax_15 + 0xc)
    var_1c = *(eax_15 + 8)
    float edx_10 = *(eax_15 + 0x14)
    var_14 = *(eax_15 + 0x10)
    int32_t eax_16
    int80_t result
    result, eax_16 = sub_4fb1d0(&var_70, &var_1c)
    void var_104
    __builtin_memcpy(&var_104, eax_16, 0x40)
    __builtin_memcpy(arg3, &var_104, 0x40)
    long double x87_r6
    
    if (*(eax_6 + 0x4a8) s<= *(eax_6 + 0x5c))
        x87_r6 = fconvert.t(*(var_78 i+ 0x78))
    else
        x87_r6 = fconvert.t(*(eax_6 + 0x4ac))
    
    var_78 = fconvert.s(x87_r6)
    long double x87_r6_1 = fconvert.t(var_78)
    long double x87_r5 = fconvert.t(fconvert.s(x87_r6_1))
    long double x87_r4 = fconvert.t(0.5)
    long double x87_r3 =
        fconvert.t(fconvert.s((fconvert.t(arg3[0xe]) + fconvert.t(arg3[0xc])) * x87_r4))
    long double x87_r2_1 = fconvert.t(fconvert.s(x87_r5))
    float var_7c = fconvert.s(x87_r2_1 * (fconvert.t(arg3[0xe]) - x87_r3) + x87_r3)
    long double x87_r3_1 =
        fconvert.t(fconvert.s((fconvert.t(arg3[0xf]) + fconvert.t(arg3[0xd])) * x87_r4))
    long double x87_r2_6 = fconvert.t(fconvert.s(x87_r5))
    float var_80 = fconvert.s((fconvert.t(arg3[0xd]) - x87_r3_1) * x87_r2_6 + x87_r3_1)
    long double x87_r2_8 = fconvert.t(arg3[0xf])
    arg3[0xc] = fconvert.s((fconvert.t(arg3[0xc]) - x87_r3) * x87_r2_1 + x87_r3)
    arg3[0xd] = var_80
    arg3[0xe] = var_7c
    var_78 = fconvert.s(x87_r2_6 * (x87_r2_8 - x87_r3_1) + x87_r3_1)
    long double x87_r4_19 = fconvert.t(var_14)
    arg3[0xf] = var_78
    long double x87_r4_24 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    float var_7c_1 =
        fconvert.s(fconvert.t(fconvert.s((x87_r4_19 + fconvert.t(var_1c)) * x87_r4)) * x87_r4_24)
    var_78 = fconvert.s(x87_r4_24
        * fconvert.t(fconvert.s(x87_r4 * (fconvert.t(edx_9) + fconvert.t(edx_10)))))
    long double x87_r4_27 = fconvert.t(fconvert.s(float.t(1) - x87_r6_1))
    float var_58_5 = fconvert.s(x87_r4_27 * fconvert.t(var_78))
    *arg3 = fconvert.s(fconvert.t(*arg3) + fconvert.t(fconvert.s(fconvert.t(var_7c_1) * x87_r4_27)))
    arg3[1] = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(var_58_5))
    arg3[3] = fconvert.s(x87_r6_1 * fconvert.t(arg3[3]))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
