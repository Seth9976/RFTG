// 函数名称: sub_5b56ac
// 虚拟地址: 0x5b56ac
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5b56ac(int32_t* arg1, char* arg2, void** arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_34 = edi
    int32_t ebx = 0
    char* var_28
    void var_14
    char eax_3 = sub_5b5753(&var_14, &var_28, arg2, 0, 0, 0, 0, arg3)
    int32_t var_20
    int32_t var_1c
    
    if ((eax_3 & 4) == 0)
        int32_t eax_4 = sub_5ba1d7(&var_14, &var_20)
        
        if ((eax_3 & 2) != 0 || eax_4 == 1)
            ebx = 0x80
        
        if ((eax_3 & 1) != 0 || eax_4 == 2)
            ebx |= 0x100
    else
        ebx = 0x200
        var_20 = 0
        var_1c = 0
    
    arg1[1] = var_28 - arg2
    arg1[4] = var_20
    arg1[5] = var_1c
    *arg1 = ebx
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
