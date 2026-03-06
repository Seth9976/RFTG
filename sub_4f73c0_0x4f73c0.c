// 函数名称: sub_4f73c0
// 虚拟地址: 0x4f73c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f73c0(char arg1, int32_t arg2, char arg3, char* arg4 @ esi, char* arg5 @ edi, void* arg6)
{
    // 第一条实际指令: *arg4 = arg4[1]
    *arg4 = arg4[1]
    char edx_1 = arg4[3]
    arg4[1] = arg3
    arg4[2] = edx_1
    arg4[3] = arg1
    *(arg4 + 8) = 0xffffffff
    int32_t result = 0
    
    if (arg5[1] != 0 || arg5[3] != 0 || arg5[2] != 0)
        arg4[1] = 0
        return 0
    
    if (edx_1 == 0 && arg1 == 1 && arg3 == 1)
        if (*(arg6 + 0xfc) != 0)
            sub_4d6980()
        
        if (*arg5 == 0)
            arg4[4] = 1
        else
            result = 1
    
    if (arg4[2] != 1)
    label_4f7449:
        
        if (arg4[3] == 0)
            if (*arg4 == 0 && arg4[1] == 1 && *(arg6 + 0x100) != 0)
                sub_4d6980()
            
            if (arg4[3] == 0)
                arg4[4] = 0
    else if (arg4[3] == 0)
        if (*arg4 == 1 && arg4[4] == 1)
            result = 1
        
        goto label_4f7449
    
    return result
}
