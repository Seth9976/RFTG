// 函数名称: sub_4e7480
// 虚拟地址: 0x4e7480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4e7480(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    struct _EXCEPTION_REGISTRATION_RECORD** result
    int32_t eax
    char edx
    
    if (*arg1 == 0)
        result = sub_520800(eax, edx, arg1, 0)
    
    if (*arg1 != 0 || *arg1 != 0)
        result = arg1[1]
        
        if (result == 3)
            return sub_50ba10(arg1)
        
        if (result == 2)
            return sub_4d3a20(arg1)
        
        if (result == 4)
            sub_54c6a0(arg1)
            return sub_54c6a0(arg1)
        
        if (result == 0x15)
            return (*(*data_27e7fd8 + 0x38))(arg1)
        
        if (result == 0x1d)
            return sub_514ee0(arg1)
    
    return result
}
