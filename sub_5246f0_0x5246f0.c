// 函数名称: sub_5246f0
// 虚拟地址: 0x5246f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5246f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = 0
    void* eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_5a9450(arg2[1], 0x5b)
    
    if (eax_1 == 0)
        *arg1 = data_be1ecc
        arg1[1] = data_be1ed0
        arg1[2] = data_be1ed4
        void* ecx_5 = data_be1ed4
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            void* eax_7 = sub_4c4060(&arg1[2])
            *(eax_7 + 4) += 1
        
        return arg1
    
    char* edi = arg2[1]
    char* eax_2 = edi
    
    do
        ecx_1.b = *eax_2
        eax_2 = &eax_2[1]
    while (ecx_1.b != 0)
    
    void* edx_1 = *arg2
    void* eax_4 = sub_5218c0(ecx_1, edx_1)
    *(eax_4 + 4) = edi
    *(eax_4 + 8) = eax_2 - &eax_2[1]
    *eax_4 = 5
    sub_5225d0(arg1, edx_1, eax_4)
    return arg1
}
