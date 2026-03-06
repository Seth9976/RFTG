// 函数名称: sub_677cd0
// 虚拟地址: 0x677cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_677cd0(int32_t arg1, int32_t arg2, int32_t arg3 @ edi, int32_t arg4)
{
    // 第一条实际指令: int16_t ecx = 0
    int16_t ecx = 0
    void var_24
    uint32_t i
    
    for (i = 1; i s<= 0xf; i += 1)
        void var_22
        void* esi_1
        esi_1.w = *(&var_24 + arg2 - &var_22 + (i << 1))
        esi_1.w += ecx
        esi_1.w *= 2
        ecx = esi_1.w
        *(&var_24 + (i << 1)) = ecx
    
    int32_t esi_2 = 0
    
    if (arg4 s>= 0)
        do
            uint32_t i_1 = zx.d(*(arg3 + (esi_2 << 2) + 2))
            
            if (i_1 != 0)
                uint32_t eax = zx.d(*(&var_24 + (i_1 << 1)))
                uint32_t ecx_1 = eax
                *(&var_24 + (i_1 << 1)) = eax.w + 1
                int32_t eax_2 = 0
                
                do
                    int32_t eax_3 = eax_2 | (ecx_1 & 1)
                    i_1 -= 1
                    ecx_1 u>>= 1
                    eax_2 = eax_3 * 2
                while (i_1 s> 0)
                
                i = eax_2 u>> 1
                *(arg3 + (esi_2 << 2)) = i.w
            
            esi_2 += 1
        while (esi_2 s<= arg4)
    
    return i
}
