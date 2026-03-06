// 函数名称: sub_67fa50
// 虚拟地址: 0x67fa50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67fa50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int16_t eax = (1 << (*(esi + 0x19c)).b).w
    void* edi = *(esi + 0x1bc)
    
    if (*(esi + 0x114) != 0 && *(edi + 0x28) == 0)
        int32_t result = sub_67f550(esi)
        
        if (result == 0)
            return result
    
    int32_t* eax_1 = *(esi + 0x18)
    int32_t var_10 = esi
    int32_t var_20 = *eax_1
    int32_t edx = eax_1[1]
    int32_t eax_2 = *(edi + 0xc)
    int32_t ecx_2 = *(edi + 0x10)
    int32_t i = 0
    arg1 = eax_2
    
    if (*(esi + 0x164) s> 0)
        do
            int16_t* edx_2 = *(arg2 + (i << 2))
            
            if (ecx_2 s< 1)
                if (sub_67ed20(&var_20, eax_2, ecx_2, 1) == 0)
                    return 0
                
                int32_t var_18
                eax_2 = var_18
                int32_t var_14
                ecx_2 = var_14
                arg1 = eax_2
            
            ecx_2 -= 1
            
            if (((eax_2 s>> ecx_2.b).w.b & 1) != 0)
                *edx_2 |= eax
                eax_2 = arg1
            
            i += 1
        while (i s< *(esi + 0x164))
    
    **(esi + 0x18) = var_20
    *(*(esi + 0x18) + 4) = edx
    *(edi + 0x28) -= 1
    *(edi + 0xc) = eax_2
    *(edi + 0x10) = ecx_2
    return 1
}
