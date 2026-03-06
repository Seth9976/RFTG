// 函数名称: sub_646650
// 虚拟地址: 0x646650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_646650(int32_t* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: char* eax = arg2
    char* eax = arg2
    int32_t edi
    int32_t var_10 = edi
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    
    char* eax_2 = arg3
    
    do
        i = *eax_2
        eax_2 = &eax_2[1]
    while (i != 0)
    
    __alloca_probe_16(eax_2 - &eax_2[1] + eax - &eax[1] + 2)
    char* eax_5 = arg2
    int32_t ecx
    
    do
        ecx.b = *eax_5
        *(&var_10 - arg2 + eax_5) = ecx.b
        eax_5 = &eax_5[1]
    while (ecx.b != 0)
    int32_t* var_14
    int16_t* edi_3 = &var_14:3
    
    do
        eax_5.b = *(edi_3 + 1)
        edi_3 += 1
    while (eax_5.b != 0)
    
    *edi_3 = 0x3d
    char* eax_6 = arg3
    char* ecx_2 = eax_6
    void* edx_2
    
    do
        edx_2.b = *eax_6
        eax_6 = &eax_6[1]
    while (edx_2.b != 0)
    void* eax_7 = eax_6 - ecx_2
    char* esi_1 = ecx_2
    void* edi_4 = &var_14:3
    
    do
        ecx_2.b = *(edi_4 + 1)
        edi_4 += 1
    while (ecx_2.b != 0)
    
    int32_t esi_2
    int32_t edi_5
    edi_5, esi_2 = __builtin_memcpy(edi_4, esi_1, eax_7 u>> 2 << 2)
    __builtin_memcpy(edi_5, esi_2, eax_7 & 3)
    var_14 = &var_10
    return sub_6465b0(arg1, var_14)
}
