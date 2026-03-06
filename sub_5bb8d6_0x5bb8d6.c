// 函数名称: sub_5bb8d6
// 虚拟地址: 0x5bb8d6
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_5bb8d6(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_c = edi
    char** eax = nullptr
    int32_t* ecx_1 = arg1
    
    if (arg1 == 0)
        return eax
    
    if (*arg1 != 0)
        do
            ecx_1 = &ecx_1[1]
            eax += 1
        while (*ecx_1 != 0)
    
    char** esi_1 = __calloc_crt(eax + 1, 4)
    char** var_8_1 = esi_1
    
    if (esi_1 == 0)
        __amsg_exit(9)
        noreturn
    
    char* i = *arg1
    
    if (i != 0)
        void* edi_2 = arg1 - esi_1
        
        do
            *esi_1 = sub_5a7f6b(i)
            esi_1 = &esi_1[1]
            i = *(edi_2 + esi_1)
        while (i != 0)
    
    *esi_1 = nullptr
    return var_8_1
}
