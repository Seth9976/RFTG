// 函数名称: sub_5d90c0
// 虚拟地址: 0x5d90c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d90c0(void* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: *(arg1 + 0x34) = *arg3
    *(arg1 + 0x34) = *arg3
    *(arg1 + 0x38) = arg3[1]
    *(arg1 + 0x3c) = arg3[2]
    *(arg1 + 0x40) = arg3[3]
    int32_t edx_4 = *(arg1 + 4)
    uint32_t edx_5
    
    if (edx_4 == 0 || (edx_4 & 0xf0000000) == 0x10000000)
        edx_5 = zx.d(edx_4.b)
    else if (edx_4 == 0x32595559 || edx_4 == 0x59565955 || edx_4 == 0x55595659)
        edx_5 = 2
    else
        edx_5 = 1
    
    *arg4 = arg3[1] * *(arg1 + 0x30) + *arg3 * edx_5 + *(arg1 + 0x2c)
    *arg5 = *(arg1 + 0x30)
    return 0
}
