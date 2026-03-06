// 函数名称: sub_66bda0
// 虚拟地址: 0x66bda0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66bda0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: if (*(arg1 + 9) != 0x10)
    if (*(arg1 + 9) != 0x10)
        return 
    
    char* eax = arg2
    void* ecx_2 = &eax[arg1[1]]
    char* esi_1 = eax
    
    while (eax u< ecx_2)
        *esi_1 = *eax
        eax = &eax[2]
        esi_1 = &esi_1[1]
    
    eax.b = *(arg1 + 0xa)
    ecx_2.b = eax.b
    ecx_2.b *= 2
    ecx_2.b *= 2
    ecx_2.b *= 2
    int32_t edx_2 = zx.d(eax.b) * *arg1
    *(arg1 + 9) = 8
    *(arg1 + 0xb) = ecx_2.b
    arg1[1] = edx_2
}
