// 函数名称: sub_46dd50
// 虚拟地址: 0x46dd50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46dd50(int32_t arg1 @ edi, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t i = *(arg3 + 0xac)
    int32_t i = *(arg3 + 0xac)
    void* eax_1 = sub_46b2b0(arg1)
    int32_t edx = *(eax_1 + 0x1a08)
    int32_t ecx = 0
    
    if (edx s> 0)
        void* esi_1 = eax_1 + 0xaa4
        
        while (*esi_1 != i)
            ecx += 1
            esi_1 += 4
            
            if (ecx s>= edx)
                return sub_469ff0(arg1) __tailcall
        
        int32_t var_10_1 = 1
        sub_469e10(arg2, arg1, 0xa, 0, arg3 + 0x7c, 1, 
            sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_1 + (ecx << 2) + 0x1a10)) + 0x7c, 1)
    
    return sub_469ff0(arg1) __tailcall
}
