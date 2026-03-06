// 函数名称: sub_4f9a60
// 虚拟地址: 0x4f9a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4f9a60(void* arg1, int32_t* arg2 @ edi, void* arg3)
{
    // 第一条实际指令: if (*(arg2 + 0x21) != 0)
    if (*(arg2 + 0x21) != 0)
        return 
    
    int32_t ebx_1 = sub_4f9a10(arg2)
    int32_t eax_2 = *arg2
    int32_t* ecx_1
    
    if (arg2[0x53] s> eax_2 && arg2[0x54].b != 0 && ebx_1 == 0)
        ebx_1 = 1
    label_4f9aba:
        ecx_1 = *(arg1 + 0xe0)
        goto label_4f9ac0
    
    if (ebx_1 != 3)
        if (ebx_1 == 2)
            ecx_1 = *(arg1 + 0xe4)
            goto label_4f9ac0
        
        if (ebx_1 == 1)
            goto label_4f9aba
        
    label_4f9ac4:
        
        if (arg2[0x25] s<= eax_2)
            ecx_1 = *(arg1 + 0x68)
        else
            ecx_1 = arg2[0x26]
    else
        ecx_1 = *(arg1 + 0xe8)
    label_4f9ac0:
        
        if (ecx_1 == 0)
            goto label_4f9ac4
    
    sub_4f67d0(arg3, nullptr, ecx_1, arg1, arg2, arg3, nullptr, nullptr)
    void* eax_4 = arg1 + 0xec
    
    if (ebx_1 != 3)
        eax_4 = arg1 + 0xb8
    
    int32_t var_c = *eax_4
    void* eax_5 = arg1 + 0xf0
    
    if (ebx_1 != 3)
        eax_5 = arg1 + 0xbc
    
    int32_t var_8
    int32_t* var_1c_1 = &var_8
    var_8 = *eax_5
    sub_4f95b0(&var_8, arg3, arg2, arg1, arg3, &var_c)
}
