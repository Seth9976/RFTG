// 函数名称: sub_5bb103
// 虚拟地址: 0x5bb103
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bb103(int32_t* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_38 = edi
    void var_28
    sub_5a73dd(&var_28, arg3)
    char* var_2c
    void var_14
    char eax_2 = sub_5b5753(&var_14, &var_2c, arg2, 0, 0, 0, 0, &var_28)
    int32_t eax_3 = sub_5ba1d7(&var_14, arg1)
    int32_t result
    void* var_20
    char var_1c
    
    if ((eax_2 & 3) == 0)
        if (eax_3 != 1)
            if (eax_3 != 2)
                goto label_5bb191
            
            goto label_5bb175
        
    label_5bb15f:
        
        if (var_1c != 0)
            *(var_20 + 0x70) &= 0xfffffffd
        
        result = 3
    else if ((eax_2 & 1) != 0)
    label_5bb175:
        
        if (var_1c != 0)
            *(var_20 + 0x70) &= 0xfffffffd
        
        result = 4
    else
        if ((eax_2 & 2) != 0)
            goto label_5bb15f
        
    label_5bb191:
        
        if (var_1c != 0)
            *(var_20 + 0x70) &= 0xfffffffd
        
        result = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
