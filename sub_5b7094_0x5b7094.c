// 函数名称: sub_5b7094
// 虚拟地址: 0x5b7094
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b7094(int32_t* arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t* arg5, int32_t arg6, int32_t* arg7, char arg8)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    bool cond:0 = __getptd()[0x83] != 0
    int32_t edx_1
    
    if (not(cond:0))
        edx_1 = *arg1
    
    if (cond:0 || edx_1 == 0xe06d7363 || edx_1 == 0x80000026 || (*arg5 & 0x1fffffff) u< 0x19930522
            || (arg5[8].b & 1) == 0)
        if ((arg1[1].b & 0x66) == 0)
            if (arg5[3] != 0)
            label_5b712d:
                
                if (*arg1 == 0xe06d7363 && arg1[4] u>= 3 && arg1[5] u> 0x19930522)
                    int32_t edx_7 = *(arg1[7] + 8)
                    
                    if (edx_7 != 0)
                        return edx_7(arg1, arg2, arg3, arg4, arg5, arg6, arg7, zx.d(arg8))
                
                sub_5b6d02(arg1, arg2, arg3, arg4, arg5, arg8, arg6, arg7)
            else if ((*arg5 & 0x1fffffff) u>= 0x19930521 && arg5[7] != 0)
                goto label_5b712d
        else if (arg5[1] != 0 && arg6 == 0)
            int32_t var_14_1 = 0xffffffff
            sub_5b6582(arg2, arg4, arg5)
    
    return 1
}
