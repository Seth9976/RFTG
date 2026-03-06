// 函数名称: sub_5c2e20
// 虚拟地址: 0x5c2e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HANDLEsub_5c2e20(int32_t* arg1, int32_t* arg2, char* arg3, SECURITY_ATTRIBUTES* arg4)
{
    // 第一条实际指令: int16_t* eax = arg1[7]
    int16_t* eax = arg1[7]
    void* edx = &eax[1]
    int16_t i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    
    if (*arg2 != 0)
    label_5c2e76:
        int32_t eax_6 = *arg2
        char* var_14_3 = arg3
        int32_t var_18_1 = arg1[7]
        wchar16 const* const var_1c_1 = u"%s.%08x"
        
        if (sub_5c2d60(eax_6, ((eax - edx) s>> 1) + 0xa, arg3, eax_6) == ((eax - edx) s>> 1) + 9)
            return CreateFileW(*arg2, 0xc0000000, FILE_SHARE_READ, arg4, CREATE_NEW, 0x180, nullptr)
    else
        int32_t eax_4 = sub_5a881a((((eax - edx) s>> 1) + 0xa) * 2)
        *arg2 = eax_4
        
        if (eax_4 != 0)
            goto label_5c2e76
        
        zip_error_set(arg1, 0xe, eax_4)
    
    return 0xffffffff
}
