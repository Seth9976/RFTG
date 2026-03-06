// 函数名称: sub_5da800
// 虚拟地址: 0x5da800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da800(void* arg1 @ esi, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0xc)
    int32_t eax = *(arg1 + 0xc)
    
    if (*(arg1 + 8) == eax)
        void* var_8_1 = (eax << 2) + 4
        int32_t var_c_1 = *(arg1 + 0x10)
        int32_t eax_2 = sub_5d0ae0()
        int32_t eax_4
        
        if (eax_2 != 0)
            int32_t var_8_2 = 0x14
            *(arg1 + 0x10) = eax_2
            *(*(arg1 + 0x10) + (*(arg1 + 0xc) << 2)) = sub_5d0ac0()
            eax_4 = *(arg1 + 0xc)
        
        if (eax_2 == 0 || *(*(arg1 + 0x10) + (eax_4 << 2)) == 0)
            sub_5cd050(0)
            return 0xffffffff
        
        *(arg1 + 0xc) = eax_4 + 1
    
    int32_t ecx_3 = *(arg1 + 8)
    int32_t* eax_7 = *(*(arg1 + 0x10) + (ecx_3 << 2))
    *(arg1 + 8) = ecx_3 + 1
    eax_7[2] = fconvert.s(fconvert.t(arg4))
    eax_7[3] = fconvert.s(fconvert.t(arg5))
    *eax_7 = arg2
    eax_7[1] = arg3
    eax_7[4] = fconvert.s(fconvert.t(arg6))
    return 0
}
