// 函数名称: sub_5a959e
// 虚拟地址: 0x5a959e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a959e(char* arg1, char* arg2)
{
    // 第一条实际指令: char* edx = arg2
    char* edx = arg2
    char* esi = arg1
    int32_t edi
    int32_t var_c = edi
    uint32_t eax_1
    uint32_t ecx_2
    
    do
        eax_1 = zx.d(*esi)
        esi = &esi[1]
        
        if (eax_1 - 0x41 u<= 0x19)
            eax_1 += 0x20
        
        ecx_2 = zx.d(*edx)
        edx = &edx[1]
        
        if (ecx_2 - 0x41 u<= 0x19)
            ecx_2 += 0x20
        
        if (eax_1 == 0)
            break
    while (eax_1 == ecx_2)
    
    return eax_1 - ecx_2
}
