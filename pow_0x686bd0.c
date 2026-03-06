// 函数名称: _pow
// 虚拟地址: 0x686bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t_pow(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control)
{
    // 第一条实际指令: if (data_3166ed8 != 0)
    if (data_3166ed8 != 0)
        int32_t eax_2 = arg1 & 0x7f80
        bool cond:0_1 = eax_2 != 0x1f80
        
        if (eax_2 == 0x1f80)
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
            eax_2.w = temp0_1
            eax_2.w &= 0x7f
            cond:0_1 = eax_2.w != 0x7f
        
        int32_t edi
        
        if (not(cond:0_1))
            return __pow_pentium4(edi) __tailcall
    
    void arg_c
    int32_t eax_4
    int32_t ecx
    long double st0_1
    st0_1, eax_4 = __fload_withFB(ecx, &arg_c)
    int16_t x87tag
    return sub_686c6d(eax_4, arg2, x87tag, st0_1) __tailcall
}
