// 函数名称: sub_5de9e0
// 虚拟地址: 0x5de9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de9e0(void* arg1)
{
    // 第一条实际指令: int32_t ecx_1 = *(*(arg1 + 0x278) + 0x28)
    int32_t ecx_1 = *(*(arg1 + 0x278) + 0x28)
    
    if (ecx_1 == 0)
        return 0
    
    jump(ecx_1)
}
