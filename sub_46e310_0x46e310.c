// 函数名称: sub_46e310
// 虚拟地址: 0x46e310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46e310(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void var_14
    void var_14
    int32_t eax_1 = __security_cookie ^ &var_14
    void* eax_3 = *(data_27e7a40 + 0x548)
    int32_t edi = arg3
    
    if (*(eax_3 + 0x2c0a4) != 4)
        *(eax_3 + 0x2c0a4) = 0xa
        int32_t var_10
        sub_421f20(sub_41efc0(&var_10))
    
    void* eax_5 = sub_46b2b0(arg2)
    *(eax_5 + 0x1c) = 4
    
    if (*(arg4 + 0x459) != 0)
        *(eax_5 + 0x1f58) = arg6
        *(eax_5 + 0x18) = edi
    else
        *(eax_5 + 0x1f58) = 1
        *(eax_5 + 0x18) = 0
        edi = 0
    
    *(eax_5 + 0x1f44) = 0
    *(eax_5 + 0x1f48) = 0
    *(eax_5 + 0x1f4c) = 0
    *(eax_5 + 0x1f50) = 0
    
    if (edi s> 0)
        *(eax_5 + 0x1f58) = edi
    
    if (edi != 2)
        *(eax_5 + 0x1f54) = 0
    else
        *(eax_5 + 0x1f44) = *arg5 & 0x7f
        *(eax_5 + 0x1f48) = (*arg5 u>> 7).b & 1
        *(eax_5 + 0x1f49) = 1
        *(eax_5 + 0x1f54) = 1
    
    *(eax_5 + 0x1a08) = 0
    *(eax_5 + 0x1f30) = 0
    *(eax_5 + 0x1f34) = 0
    void* result = *(data_27e7a40 + 0x548)
    *(result + 0x210) = 0
    *(result + 0x214) = 0
    *(result + 0x2c078) = 1
    sub_5a6aba(eax_1 ^ &var_14)
    return result
}
