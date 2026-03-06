// 函数名称: sub_5c8d00
// 虚拟地址: 0x5c8d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5c8d00(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 != arg2)
    if (arg1 != arg2)
        int32_t edx_1 = *(arg1 + 4)
        int32_t eax_1 = *(arg2 + 4)
        
        if (edx_1 != eax_1)
            return eax_1 - edx_1
        
        edx_1 = *(arg1 + 8)
        eax_1 = *(arg2 + 8)
        
        if (edx_1 != eax_1)
            return eax_1 - edx_1
        
        edx_1.b = *(arg1 + 1)
        eax_1.b = *(arg2 + 1)
        
        if (edx_1.b != eax_1.b)
            return zx.d(eax_1.b) - zx.d(edx_1.b)
        
        eax_1 = zx.d(*(arg2 + 2)) & 0xf
        edx_1 = zx.d(*(arg1 + 2)) & 0xf
        
        if (edx_1 != eax_1)
            return eax_1 - edx_1
        
        uint32_t ecx_1 = *(arg1 + 0xc)
        uint32_t eax_3 = *(arg2 + 0xc)
        
        if (ecx_1 != eax_3)
            return eax_3 - ecx_1
    
    return 0
}
