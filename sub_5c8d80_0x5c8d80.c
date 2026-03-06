// 函数名称: sub_5c8d80
// 虚拟地址: 0x5c8d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8d80(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = data_bed820
    void* ecx = data_bed820
    int32_t __saved_ebx = (*(ecx + 0xe8) + 1) * 0x44
    int32_t __saved_edi = *(ecx + 0xec)
    int32_t eax_3 = sub_5d0ae0()
    
    if (eax_3 == 0)
        sub_5cd050(0)
        return 0xffffffff
    
    void* edx_5 = data_bed820
    int32_t result = *(edx_5 + 0xe8)
    *(edx_5 + 0xe8) = result + 1
    int32_t* edi = eax_3 + result * 0x44
    __builtin_memcpy(edi, arg1, 0x44)
    edi[0xf] = edx_5
    *(edx_5 + 0xec) = eax_3
    char* eax_4 = *arg1
    
    if (eax_4 != 0)
        *edi = sub_5cd390(eax_4)
        return result
    
    int32_t var_38_1 = 0xa
    void var_28
    void* var_3c = &var_28
    int32_t result_1 = result
    sub_5ce150()
    *edi = sub_5cd390(&var_28)
    return result
}
