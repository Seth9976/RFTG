// 函数名称: sub_6640e0
// 虚拟地址: 0x6640e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6640e0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        *(arg1 + 0x4c) = arg2
        *(arg1 + 0x44) = arg3
        *(arg1 + 0x48) = arg4
    
    return arg1
}
