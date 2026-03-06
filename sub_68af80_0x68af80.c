// 函数名称: sub_68af80
// 虚拟地址: 0x68af80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68af80(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 u> 0x20)
    if (arg2 u> 0x20)
        return 0xffffffff
    
    int32_t esi = arg1[1]
    int32_t eax_1 = arg1[4]
    int32_t edi = *arg1
    int32_t edx_1 = arg2 + esi
    
    if (edi s>= eax_1 - 4)
        if (edi s> eax_1 - ((edx_1 + 7) s>> 3))
            return 0xffffffff
        
        if (edx_1 == 0)
            return 0
    
    char* edi_1 = arg1[3]
    int32_t* ecx
    ecx.b = arg1[1].b
    uint32_t eax_6 = zx.d(*edi_1) u>> ecx.b
    
    if (edx_1 s> 8)
        eax_6 |= zx.d(edi_1[1]) << (8 - esi.b)
        
        if (edx_1 s> 0x10)
            eax_6 |= zx.d(edi_1[2]) << (0x10 - esi.b)
            
            if (edx_1 s> 0x18)
                eax_6 |= zx.d(edi_1[3]) << (0x18 - esi.b)
                
                if (edx_1 s> 0x20 && esi != 0)
                    eax_6 |= zx.d(edi_1[4]) << (0x20 - esi.b)
    
    return eax_6 & *((arg2 << 2) + &data_83f1c0)
}
