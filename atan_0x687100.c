// 函数名称: _atan
// 虚拟地址: 0x687100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t_atan(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, void arg3)
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
        
        if (not(cond:0_1))
            return sub_68a518(arg3) __tailcall
    
    void* edx_1 = &arg3
    int32_t eax_4
    int32_t ecx
    int32_t ecx_2
    long double st0
    st0, eax_4, ecx_2 = __fload_withFB(ecx, edx_1)
    return sub_687198(eax_4, arg2, st0, edx_1, ecx_2) __tailcall
}
