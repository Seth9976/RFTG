// 函数名称: sub_4eaaf0
// 虚拟地址: 0x4eaaf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4eaaf0(char* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* esi
    int32_t* esi
    int32_t* eax = sub_4e7210(esi)
    float* entry_ebx
    
    if (arg1 == 0)
        *arg2 = 0
        *arg3 = eax[0xb]
        *entry_ebx = fconvert.s(fconvert.t(eax[0xa]))
        int32_t* eax_2
        eax_2.b = 1
        return eax_2
    
    void* eax_3 = sub_4e8680(eax, arg1)
    
    if (eax_3 == 0)
        *arg2 = 0
        *arg3 = eax[0xb]
        *entry_ebx = fconvert.s(fconvert.t(eax[0xa]))
        int32_t* eax_4
        eax_4.b = 0
        return eax_4
    
    *arg2 = *(eax_3 + 4)
    *arg3 = *(eax_3 + 8) - *(eax_3 + 4) + 1
    *entry_ebx = fconvert.s(fconvert.t(*(eax_3 + 0xc)))
    eax_3.b = 1
    return eax_3
}
