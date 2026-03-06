// 函数名称: sub_50fbc0
// 虚拟地址: 0x50fbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_50fbc0(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_510b30(arg3, arg2)
    int32_t eax_4
    int32_t edx
    eax_4, edx = sub_50c140(*eax_3)
    int32_t* ebx_2 = arg5 * 0xb8 + *eax_4
    int128_t* eax_6 = sub_50c830(arg5, edx, eax_3)
    void var_30
    __builtin_memcpy(arg4, sub_50faa0(eax_6, arg2, arg5, &var_30), 0x20)
    float eax_9 = sub_510860(arg5)
    void var_b8
    int32_t eax_11
    int32_t* edx_4
    int80_t result
    result, eax_11, edx_4 = sub_50d7f0(&var_b8, eax_6, ebx_2, &var_b8)
    float var_50
    __builtin_memcpy(&var_50, eax_11, 0x40)
    int32_t var_cc_2 = arg3
    int32_t* var_d0 = &var_50
    __builtin_memcpy(&var_50, sub_4fa9f0(arg6, edx_4, arg3, &var_b8, eax_9), 0x40)
    float var_70 = fconvert.s(fconvert.t(var_50))
    float var_6c = fconvert.s(float.t(0))
    float var_4c
    float var_68 = fconvert.s(fneg(fconvert.t(var_4c)))
    float var_44
    float var_98 = fconvert.s(fconvert.t(var_44))
    int32_t var_94 = 0
    int32_t var_90 = 0
    int32_t var_8c = 0
    int32_t var_88 = 0x3f800000
    float var_84 = var_70
    float var_80 = var_6c
    float var_7c = var_68
    __builtin_memcpy(&var_30, &var_98, 0x20)
    sub_405f60(&var_98, arg4)
    __builtin_memcpy(arg4, &var_98, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
