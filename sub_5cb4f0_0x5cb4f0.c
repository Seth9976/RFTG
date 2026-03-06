// 函数名称: sub_5cb4f0
// 虚拟地址: 0x5cb4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb4f0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = arg1
    char* eax = esi[2]
    int32_t* ecx_1 = esi[3]
    
    if ((arg2.b & 2) != 0 && *(data_bed820 + 0x94) == 0)
        sub_5cce60("No OpenGL support in video driver")
        return 0xffffffff
    
    int32_t ebx_1
    
    if ((esi[0xc] & 0x800) == 0)
        ebx_1 = arg2 & 0xfffff7ff
    else
        ebx_1 = arg2 | 0x800
    
    sub_5cb1b0(esi)
    int32_t* eax_1 = esi[0x19]
    
    if (eax_1 != 0)
        *eax_1 &= 0xfffffffb
        sub_5d65d0(esi[0x19])
    
    void* eax_3 = data_bed820
    int32_t ecx_2 = *(eax_3 + 0x70)
    
    if (ecx_2 != 0)
        ecx_2(eax_3, esi)
        eax_3 = data_bed820
    
    int32_t ecx_3 = *(eax_3 + 0x64)
    
    if (ecx_3 != 0 && (ebx_1 & 0x800) == 0)
        ecx_3(eax_3, esi)
        eax_3 = data_bed820
    
    int32_t edi_1 = ebx_1 & 2
    
    if ((esi[0xc] & 2) != edi_1)
        if (edi_1 == 0)
            sub_5ca340()
        else if (sub_5ca230(nullptr) s< 0)
            return 0xffffffff
        
        eax_3 = data_bed820
    
    esi[2] = 0
    esi[3] = 0
    esi[0xc] = (ebx_1 & 0x32) | 8
    int32_t ecx_9 = *(eax_3 + 0x18)
    
    if (ecx_9 != 0 && (ebx_1 & 0x800) == 0 && ecx_9(eax_3, esi) s< 0)
        if (edi_1 != 0)
            sub_5ca340()
        
        return 0xffffffff
    
    if (eax != 0)
        sub_5c97a0(esi, eax)
        char* var_20_1 = eax
        sub_5d0af0()
    
    if (ecx_1 != 0)
        sub_5c9820(esi, ecx_1)
        sub_5d65d0(ecx_1)
    
    sub_5cb480(esi, ebx_1)
    return 0
}
