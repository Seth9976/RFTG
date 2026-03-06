// 函数名称: sub_6644d0
// 虚拟地址: 0x6644d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6644d0(int32_t arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    *(arg2 + 0x5a) = *arg3
    *(arg2 + 0x5e) = arg3[1]
    int32_t* ecx_1
    ecx_1.w = arg3[2].w
    *(arg2 + 8) |= 0x20
    *(arg2 + 0x62) = ecx_1.w
}
