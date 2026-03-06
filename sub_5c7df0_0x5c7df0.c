// 函数名称: sub_5c7df0
// 虚拟地址: 0x5c7df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c7df0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char* arg7)
{
    // 第一条实际指令: *arg1 = arg2
    *arg1 = arg2
    arg1[1] = arg3
    arg1[2] = arg4
    arg1[4] = arg6
    arg1[3] = arg5
    __builtin_memset(&arg1[5], 0xff, 0x30)
    void* esi = &arg1[0x2f]
    void* ecx_2 = &arg1[0x20]
    int32_t i_3 = 0xf
    int32_t i
    
    do
        *(ecx_2 - 0x3c) = 0xffffffff
        *ecx_2 = 0xffffffff
        *esi = 0xffffffff
        ecx_2 += 4
        esi += 8
        i = i_3
        i_3 -= 1
    while (i != 1)
    void* ecx_3 = &arg1[0x61]
    int32_t i_2 = i_3 + 0x14
    int32_t i_1
    
    do
        *(ecx_3 - 0x50) = 0xffffffff
        *ecx_3 = 0xffffffff
        *(ecx_3 + 0x50) = 0xffffffff
        *(ecx_3 + 0xa0) = 0xffffffff
        ecx_3 += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    __builtin_memset(&arg1[0x9d], 0xffffffff, 0x100)
    int32_t* var_10 = arg1
    return sub_5c7d00(arg7, arg1)
}
