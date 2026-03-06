// 函数名称: sub_5b4d36
// 虚拟地址: 0x5b4d36
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5b4d36(int32_t arg1, int32_t arg2, double arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    double arg_c
    double arg_1c
    
    if (sub_5b48d1(arg1, &arg_1c, arg4.b) == 0)
        double var_60 = fconvert.d(fconvert.t(arg3))
        int32_t var_50
        int32_t var_50_1 = (var_50 & 0xffffffe3) | 3
        void var_90
        sub_5b45d2(&var_90, &arg4, arg1.b, arg2, &arg_c, &arg_1c, 0)
        noreturn
    
    int32_t eax_6 = sub_5b4ae2(arg1.b)
    long double result
    
    if (data_8b9230 != 0 || eax_6 == 0)
        sub_5b4ab5(eax_6)
        int16_t x87control
        sub_5b4e31(x87control, arg4.w, 0xffff)
        result = fconvert.t(arg_1c)
    else
        int32_t var_9c
        var_9c.q = fconvert.d(fconvert.t(arg_1c))
        int32_t var_a4
        var_a4.q = fconvert.d(fconvert.t(arg3))
        int32_t var_ac
        var_ac.q = fconvert.d(fconvert.t(arg_c))
        int32_t var_a8
        int32_t var_a0
        result = sub_5b4b16(eax_6, arg2, var_ac, var_a8, var_a4, var_a0, var_9c, arg4.w)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
