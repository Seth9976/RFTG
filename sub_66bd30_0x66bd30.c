// 函数名称: sub_66bd30
// 虚拟地址: 0x66bd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66bd30(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: if (*(arg1 + 9) != 0x10)
    if (*(arg1 + 9) != 0x10)
        return 
    
    char* eax = arg2
    void* edx_2 = &eax[arg1[1]]
    char* esi_1 = eax
    int32_t ecx
    
    while (eax u< edx_2)
        uint32_t ecx_2 = zx.d(*eax)
        ecx = ecx_2 + (((zx.d(eax[1]) - ecx_2 + 0x80) * 0xffff) s>> 0x18)
        eax = &eax[2]
        *esi_1 = ecx.b
        esi_1 = &esi_1[1]
    
    eax.b = *(arg1 + 0xa)
    ecx.b = eax.b
    ecx.b *= 2
    ecx.b *= 2
    ecx.b *= 2
    int32_t edx_4 = zx.d(eax.b) * *arg1
    *(arg1 + 9) = 8
    *(arg1 + 0xb) = ecx.b
    arg1[1] = edx_4
}
