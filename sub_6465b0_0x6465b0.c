// 函数名称: sub_6465b0
// 虚拟地址: 0x6465b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6465b0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax_1 = _realloc(*arg1, (arg1[2] << 2) + 8)
    int32_t eax_1 = _realloc(*arg1, (arg1[2] << 2) + 8)
    int32_t edx_1 = arg1[1]
    *arg1 = eax_1
    int32_t eax_3 = _realloc(edx_1, (arg1[2] << 2) + 8)
    char* ecx_2 = arg2
    arg1[1] = eax_3
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    *(eax_3 + (arg1[2] << 2)) = ecx_2 - &ecx_2[1]
    int32_t* edi_3 = arg1[2] * 4
    *(edi_3 + *arg1) = sub_5a881a(*(arg1[1] + edi_3) + 1)
    char* edx_5 = *(*arg1 + (arg1[2] << 2))
    char* ecx_6 = arg2
    int32_t eax_6
    
    do
        eax_6.b = *ecx_6
        *edx_5 = eax_6.b
        ecx_6 = &ecx_6[1]
        edx_5 = &edx_5[1]
    while (eax_6.b != 0)
    arg1[2] += 1
    int32_t result = arg1[2]
    *(*arg1 + (result << 2)) = 0
    return result
}
