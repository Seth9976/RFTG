// 函数名称: sub_609330
// 虚拟地址: 0x609330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_609330(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x44)
    void* eax = *(arg1 + 0x44)
    *(eax + 0x20) = *arg2
    *(eax + 0x24) = arg2[1]
    *(eax + 0x28) = arg2[2]
    *(eax + 0x2c) = arg2[3]
    int32_t edx_1 = *(arg1 + 4)
    uint32_t edx_2
    
    if (edx_1 == 0 || (edx_1 & 0xf0000000) == 0x10000000)
        edx_2 = zx.d(edx_1.b)
    else if (edx_1 == 0x32595559 || edx_1 == 0x59565955 || edx_1 == 0x55595659)
        edx_2 = 2
    else
        edx_2 = 1
    
    *arg3 = arg2[1] * *(eax + 0x1c) + *arg2 * edx_2 + *(eax + 0x18)
    *arg4 = *(eax + 0x1c)
    return 0
}
