// 函数名称: sub_5b4c6c
// 虚拟地址: 0x5b4c6c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5b4c6c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    double arg_14
    int32_t eax_2 = sub_5b48d1(arg1, &arg_14, arg3.b)
    double arg_c
    
    if (eax_2 == 0)
        int32_t var_50
        int32_t var_50_1 = var_50 & 0xfffffffe
        void var_90
        sub_5b45d2(&var_90, &arg3, arg1.b, arg2, &arg_c, &arg_14, eax_2)
        noreturn
    
    int32_t eax_3 = sub_5b4ae2(arg1.b)
    long double result
    
    if (data_8b9230 != 0 || eax_3 == 0)
        sub_5b4ab5(eax_3)
        int16_t x87control
        sub_5b4e31(x87control, arg3.w, 0xffff)
        result = fconvert.t(arg_14)
    else
        int32_t var_9c
        var_9c.q = fconvert.d(fconvert.t(arg_14))
        int32_t var_a4
        var_a4.q = fconvert.d(float.t(0))
        int32_t var_ac
        var_ac.q = fconvert.d(fconvert.t(arg_c))
        int32_t var_a8
        int32_t var_a0
        result = sub_5b4b16(eax_3, arg2, var_ac, var_a8, var_a4, var_a0, var_9c, arg3.w)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
