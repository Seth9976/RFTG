// 函数名称: sub_505640
// 虚拟地址: 0x505640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_505640(int32_t arg1, char arg2, char arg3, char* arg4 @ edi, int32_t* arg5, char* arg6)
{
    // 第一条实际指令: int32_t eax = data_307bf0c
    int32_t eax = data_307bf0c
    *arg4 = arg4[1]
    arg4[2] = arg4[3]
    arg4[1] = arg2
    arg4[3] = arg3
    *(arg4 + 8) = 0xffffffff
    int32_t result = 0
    
    if (arg6[1] != 0 || arg6[3] != 0 || arg6[2] != 0)
        arg4[1] = 0
        return 0
    
    if (arg4[2] == 0 && arg3 == 1 && arg2 == arg3)
        if (*(arg1 * 0x118 + *sub_4f4890(arg5) + 0xfc) != 0 || eax != 0)
            sub_4d6980()
        
        if (*arg6 == 0)
            arg4[4] = 1
        else
            result = 1
            sub_4f4890(arg5)
    
    if (arg4[2] != 1)
    label_505708:
        
        if (arg4[3] == 0)
            if (*arg4 == 0 && arg4[1] == 1 && *(arg1 * 0x118 + *sub_4f4890(arg5) + 0x100) != 0)
                sub_4d6980()
            
            if (arg4[3] == 0)
                arg4[4] = 0
    else if (arg4[3] == 0)
        if (*arg4 == 1 && arg4[4] == 1)
            result = 1
            sub_4f4890(arg5)
        
        goto label_505708
    
    return result
}
