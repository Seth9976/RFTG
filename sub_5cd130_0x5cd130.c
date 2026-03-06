// 函数名称: sub_5cd130
// 虚拟地址: 0x5cd130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cd130(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ecx = arg2
    int32_t* ecx = arg2
    int32_t* edx = arg1
    int32_t i = arg3
    
    while (i u>= 4)
        if (*edx != *ecx)
            goto label_5cd15b
        
        i -= 4
        ecx = &ecx[1]
        edx = &edx[1]
    
    if (i != 0)
    label_5cd15b:
        uint32_t eax_2 = zx.d(*edx)
        uint32_t edi_1 = zx.d(*ecx)
        
        if (eax_2 != edi_1)
            return (eax_2 - edi_1) s>> 0x1f | 1
        
        if (i u> 1)
            uint32_t eax_4 = zx.d(*(edx + 1))
            uint32_t edi_2 = zx.d(*(ecx + 1))
            
            if (eax_4 != edi_2)
                return (eax_4 - edi_2) s>> 0x1f | 1
            
            if (i u> 2)
                uint32_t eax_5 = zx.d(*(edx + 2))
                uint32_t edi_3 = zx.d(*(ecx + 2))
                
                if (eax_5 != edi_3)
                    return (eax_5 - edi_3) s>> 0x1f | 1
                
                if (i u> 3)
                    return (zx.d(*(edx + 3)) - zx.d(*(ecx + 3))) s>> 0x1f | 1
    
    return 0
}
