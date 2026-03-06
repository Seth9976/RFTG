// 函数名称: sub_4fed70
// 虚拟地址: 0x4fed70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fed70(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if ((arg1[2].b & 1) == 0)
    if ((arg1[2].b & 1) == 0)
        sub_4fed40(*arg1, arg1[3])
        *arg1 = 0
    
    int32_t* eax_2 = arg1[1]
    
    if (eax_2 != 0)
        sub_500770(eax_2)
        arg1[1] = 0
    
    return _aligned_free_base(arg1)
}
