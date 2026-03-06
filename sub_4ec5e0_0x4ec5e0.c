// 函数名称: sub_4ec5e0
// 虚拟地址: 0x4ec5e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ec5e0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi
    
    if (arg3 != 0)
        int32_t* var_a0_1 = arg3
        float var_54[0x8]
        int32_t eax_4 = sub_5171f0(&var_54, arg3, 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(*(arg5 + 0x30) + 0x2f0))))))
        float var_a0_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(*(arg5 + 0x30) + 0x2e8)))))
        float var_34
        __builtin_memcpy(&var_34, eax_4, 0x20)
        long double x87_r6_1 = float.t(1)
        float var_8c
        __builtin_memcpy(&var_54, sub_5171f0(&var_8c, arg3, var_a0_3), 0x20)
        __builtin_memcpy(&var_8c, &var_34, 0x20)
        var_8c = fconvert.s(x87_r6_1 / x87_r6_1)
        float var_88 = fconvert.s(fneg(fconvert.t(var_88)))
        float var_84
        float var_84_1 = fconvert.s(fneg(fconvert.t(var_84)))
        float var_80
        float var_80_1 = fconvert.s(fneg(fconvert.t(var_80)))
        float var_78
        float var_6c
        sub_405970(&var_6c, &var_78, &var_88)
        long double x87_r7_15 = fconvert.t(fconvert.s(fneg(fconvert.t(var_8c))))
        var_6c = fconvert.s(x87_r7_15 * fconvert.t(var_6c))
        var_78 = var_6c
        float var_68
        float var_74 = fconvert.s(fconvert.t(var_68) * x87_r7_15)
        float var_64
        float var_70_1 = fconvert.s(x87_r7_15 * fconvert.t(var_64))
        __builtin_memcpy(&var_34, &var_8c, 0x20)
        esi = &var_8c
        sub_405f60(esi, &var_54)
    else
        esi = &data_be4c5c
    
    __builtin_memcpy(arg4, esi, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
