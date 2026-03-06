// 函数名称: sub_679060
// 虚拟地址: 0x679060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t (**sub_679060(int32_t* arg1, int32_t arg2, int32_t arg3))(int32_t* arg1)
{
    // 第一条实际指令: arg1[1] = 0
    arg1[1] = 0
    
    if (arg2 != 0x3e)
        *(*arg1 + 0x14) = 0xc
        *(*arg1 + 0x18) = 0x3e
        *(*arg1 + 0x1c) = arg2
        (**arg1)(arg1)
    
    if (arg3 != 0x1d0)
        *(*arg1 + 0x14) = 0x15
        *(*arg1 + 0x18) = 0x1d0
        *(*arg1 + 0x1c) = arg3
        (**arg1)(arg1)
    
    int32_t* ecx_5 = arg1[3]
    int32_t ebx = *arg1
    int32_t ecx_6 = sub_5abfc0(arg1, 0, 0x1d0)
    int32_t* var_20 = arg1
    *arg1 = ebx
    arg1[3] = ecx_5
    arg1[4] = 1
    sub_67c8e0(ecx_6)
    arg1[2] = 0
    arg1[6] = 0
    __builtin_memset(&arg1[0x29], 0, 0x30)
    arg1[0x4c] = 0
    sub_67b530(arg1)
    int32_t (** result)(int32_t* arg1) = sub_67bc70(arg1)
    arg1[5] = 0xc8
    return result
}
