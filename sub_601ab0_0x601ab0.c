// 函数名称: sub_601ab0
// 虚拟地址: 0x601ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HKLsub_601ab0(void* arg1 @ esi)
{
    // 第一条实际指令: HKL eax = GetKeyboardLayout(0)
    HKL eax = GetKeyboardLayout(0)
    *(arg1 + 0x14e4) = eax
    
    if (data_bf80a0 != eax)
        uint32_t ecx_1 = zx.d(eax.w)
        data_bf80a0 = eax
        int32_t eax_2 = ecx_1 & 0x3ff
        eax = eax_2 - 4
        bool cond:0_1
        
        if (eax_2 == 4)
            *(arg1 + 0x14b4) = 1
            cond:0_1 = (ecx_1 & 0xfc00) != 0x800
        else
            void* __offset(HKL__, -0xd) eax_3 = eax - 0xd
            
            if (eax == 0xd)
                *(arg1 + 0x14b4) = 1
                return eax_3
            
            eax = eax_3 - 1
            cond:0_1 = eax_3 != 1
        
        if (not(cond:0_1))
            *(arg1 + 0x14b4) = 0
    
    return eax
}
