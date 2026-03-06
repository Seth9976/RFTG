// 函数名称: sub_6870ac
// 虚拟地址: 0x6870ac
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6870ac(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control)
{
    // 第一条实际指令: long double x87_r0
    long double x87_r0
    
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
        
        if (not(cond:0_1))
            return __CIlog_pentium4(x87_r0) __tailcall
    
    return sub_688a2e(arg2, x87_r0) __tailcall
}
