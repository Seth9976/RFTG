// 函数名称: sub_5bf130
// 虚拟地址: 0x5bf130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf130(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        int32_t ecx_1
        ecx_1.b = arg1 == arg2
        return ecx_1
    
    uint32_t i = zx.d(arg1[1].w)
    
    if (i.w != arg2[1].w)
        return 0
    
    int32_t* edx_1 = *arg2
    int32_t* esi = *arg1
    
    while (i u>= 4)
        if (*esi != *edx_1)
            goto label_5bf17a
        
        i -= 4
        edx_1 = &edx_1[1]
        esi = &esi[1]
    
    if (i != 0)
    label_5bf17a:
        uint32_t edi_1 = zx.d(*edx_1)
        uint32_t eax_3 = zx.d(*esi)
        int32_t edx_2
        
        if (eax_3 != edi_1)
            edx_2.b = ((eax_3 - edi_1) s>> 0x1f | 1) == 0
            return edx_2
        
        if (i u> 1)
            uint32_t eax_5 = zx.d(*(esi + 1))
            uint32_t edi_2 = zx.d(*(edx_1 + 1))
            
            if (eax_5 != edi_2)
                edx_2.b = ((eax_5 - edi_2) s>> 0x1f | 1) == 0
                return edx_2
            
            if (i u> 2)
                uint32_t eax_6 = zx.d(*(esi + 2))
                uint32_t edi_3 = zx.d(*(edx_1 + 2))
                
                if (eax_6 != edi_3)
                    edx_2.b = ((eax_6 - edi_3) s>> 0x1f | 1) == 0
                    return edx_2
                
                if (i u> 3)
                    edx_2.b = ((zx.d(*(esi + 3)) - zx.d(*(edx_1 + 3))) s>> 0x1f | 1) == 0
                    return edx_2
    
    return 1
}
