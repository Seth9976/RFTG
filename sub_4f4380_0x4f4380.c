// 函数名称: sub_4f4380
// 虚拟地址: 0x4f4380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f4380(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t edx = data_26a44e4
    int32_t edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    for (int32_t i = 0; i s< 7; i += 1)
        if (arg1 s<= 1 << (i.b + 4))
            return edx + i * 0x14
    
    return edx + 0x8c
}
