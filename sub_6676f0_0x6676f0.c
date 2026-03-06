// 函数名称: sub_6676f0
// 虚拟地址: 0x6676f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6676f0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (*(arg1 + 0x2b4) == 0)
    if (*(arg1 + 0x2b4) == 0)
        int32_t ecx_3 = (zx.d(*(arg1 + 0x13e)) + 7) & 0xfffffff8
        *(arg1 + 0x2b4) = sub_667490
        *(arg1 + 0x2b8) = sub_6674d0
        *(arg1 + 0x2bc) = sub_667500
        
        if (ecx_3 != 8)
            *(arg1 + 0x2c0) = sub_667610
        else
            *(arg1 + 0x2c0) = sub_667560
    
    if (arg5 - 1 u> 3)
        return arg1
    
    return (*(arg1 + (arg5 << 2) + 0x2b0))(arg2, arg3, arg4)
}
