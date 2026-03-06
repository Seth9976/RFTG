// 函数名称: sub_65adb0
// 虚拟地址: 0x65adb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65adb0(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t i_1 = arg5
    int32_t i_1 = arg5
    int32_t ecx = 0
    
    if (i_1 s> 0)
        int32_t* eax_1 = arg3
        int32_t i
        
        do
            if (*(arg4 - arg3 + eax_1) != 0)
                arg3[ecx] = *eax_1
                ecx += 1
            
            eax_1 = &eax_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (ecx != 0)
            sub_65a970(arg1, arg3, ecx, arg6, sub_65a390)
    
    return 0
}
