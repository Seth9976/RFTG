// 函数名称: sub_5028f0
// 虚拟地址: 0x5028f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5028f0(void* arg1, char* arg2)
{
    // 第一条实际指令: char* var_20 = arg2
    char* var_20 = arg2
    char* edx
    int32_t* result = sub_5020c0(arg1, edx)
    char* var_8
    sub_4c42b0(&var_8, "UI2StateOverride")
    char* eax_2 = var_8
    
    if (eax_2 != 0 && *eax_2 != 0)
        void* eax_4 = sub_4c4060(&var_8)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_4 + 0xc) + 0x10
            sub_4f4430(eax_4, sub_4f4380(esi_2), esi_2)
    
    void* esi_3 = data_30785c8
    *(esi_3 + 0x1c) += 1
    
    if (*(esi_3 + 0x10) == 0)
        sub_504460(esi_3 + 0x10)
    
    int32_t* ecx_2 = *(esi_3 + 0x10)
    *(esi_3 + 0x10) = *ecx_2
    __builtin_memset(ecx_2, 0, 0x14)
    
    if (ecx_2 != 0)
        *ecx_2 = &data_83f3d3
        ecx_2[1] = 0
        ecx_2[2] = 0
        ecx_2[3] = 0
    
    result[2] = ecx_2
    sub_4c4590(arg2)
    return result
}
