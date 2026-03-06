// 函数名称: sub_500260
// 虚拟地址: 0x500260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_500260(int32_t arg1, int32_t arg2, BOOL* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* var_30
    sub_500000(arg4, &var_30)
    char* const lpFileName = var_30
    
    if (lpFileName == 0)
        lpFileName = &data_83f3d3
    
    void fileInformation
    BOOL eax_3 = GetFileAttributesExA(lpFileName, GetFileExInfoStandard, &fileInformation)
    int32_t ebx
    
    if (eax_3 != 0)
        BOOL var_18
        *arg3 = var_18
        int32_t var_14
        arg3[1] = var_14
        ebx.b = 1
    else
        *arg3 = eax_3
        arg3[1] = eax_3
        ebx.b = 0
    
    char* result = var_30
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&var_30)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    result.b = ebx.b
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
