// 函数名称: sub_5224f0
// 虚拟地址: 0x5224f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_5224f0(int32_t arg1, char* arg2, int32_t* arg3 @ esi, void* arg4 @ edi)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    char* eax = arg2
    int32_t var_8_1 = 0
    
    do
        arg1.b = *eax
        eax = &eax[1]
    while (arg1.b != 0)
    
    void* eax_1 = eax - &eax[1]
    void** eax_4
    void* ecx_2
    
    if (sub_5a7934(arg2, *(arg4 + 4), eax_1) == 0)
        *(arg4 + 4) += eax_1
        sub_522420(arg4)
        *arg3 = data_be1ec0
        arg3[1] = data_be1ec4
        eax_4 = &arg3[2]
        *eax_4 = data_be1ec8
        ecx_2 = data_be1ec8
    else
        *arg3 = data_be1ecc
        arg3[1] = data_be1ed0
        eax_4 = &arg3[2]
        *eax_4 = data_be1ed4
        ecx_2 = data_be1ed4
    
    if (ecx_2 != 0 && *ecx_2 != 0)
        void* eax_7 = sub_4c4060(eax_4)
        *(eax_7 + 4) += 1
    
    return arg3
}
