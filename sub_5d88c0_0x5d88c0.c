// 函数名称: sub_5d88c0
// 虚拟地址: 0x5d88c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t* __convention("regparm")sub_5d88c0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* const esi = arg1
    char* const esi = arg1
    
    if (esi == 0)
        esi = &data_83f3d3
    
    void* var_14 = sub_5cd1b0(esi) + 1
    char* const var_18 = esi
    int16_t* eax_2
    int32_t edx
    eax_2, edx = sub_5dd160("UTF-16LE", "UTF-8")
    
    if (eax_2 == 0)
        return eax_2
    
    int32_t ecx = 0
    int16_t* eax_3 = eax_2
    
    if (*eax_2 != 0)
        do
            eax_3 = &eax_3[1]
            ecx += 1
        while (*eax_3 != 0)
    
    int16_t* var_10_1 = eax_2
    int32_t eax_5 = sub_5d8880(arg2, ecx * 2 + 2, edx)
    int16_t* var_14_1 = eax_2
    sub_5d0af0()
    return eax_5
}
