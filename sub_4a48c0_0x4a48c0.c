// 函数名称: sub_4a48c0
// 虚拟地址: 0x4a48c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a48c0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* eax_1 = *(arg2 + arg1 * 0x14 + 0x46c)
    void* eax_1 = *(arg2 + arg1 * 0x14 + 0x46c)
    
    if (*(eax_1 + 6) != 1)
        return 0
    
    void* esi = *(arg2 + arg3 * 0x14 + 0x46c)
    
    if (*(esi + 6) == 1 && (*(eax_1 + 0x10) & 1) == 0 && (*(esi + 0x10) & 1) == 0)
        void* ecx_1
        ecx_1.b = *(eax_1 + 0xe)
        
        if (ecx_1.b != 1)
            arg2.b = *(esi + 0xe)
        
        if ((ecx_1.b == 1 || arg2.b == 1 || ecx_1.b == arg2.b)
                && ((ecx_1.b != 0 && *(esi + 0xe) != 0) || ecx_1.b == *(esi + 0xe)))
            ecx_1.b = *(esi + 7)
            eax_1.b = *(eax_1 + 7)
            
            if (ecx_1.b s>= eax_1.b)
                int32_t result
                result.b = sx.d(ecx_1.b) s<= sx.d(eax_1.b) + 3
                return result
    
    return 0
}
