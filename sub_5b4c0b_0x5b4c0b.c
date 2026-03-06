// 函数名称: sub_5b4c0b
// 虚拟地址: 0x5b4c0b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_5b4c0b(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, double arg5, double arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t var_c = arg3
    var_c.q = fconvert.d(fconvert.t(arg5) + fconvert.t(arg6))
    
    if (data_8b9230 == 0)
        int32_t var_30 = 1
        return sub_5b4b16(1, arg4, fconvert.d(fconvert.t(arg5)), fconvert.d(fconvert.t(arg6)), 
            fconvert.d(fconvert.t(var_c.q)), arg7, var_c, arg3)
    
    int32_t var_10_1 = 0xffff
    int32_t var_14 = arg7
    *__errno() = 0x21
    int16_t x87control
    sub_5b4e31(x87control)
    return fconvert.t(var_c.q)
}
