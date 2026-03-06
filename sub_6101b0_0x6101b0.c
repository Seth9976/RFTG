// 函数名称: sub_6101b0
// 虚拟地址: 0x6101b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6101b0(uint32_t arg1)
{
    // 第一条实际指令: uint32_t i = arg1
    for (uint32_t i = arg1; i != 0; i u>>= 1)
        if ((i.b & 1) != 0)
            return sub_6101b0(i u>> 1) + 1
    
    return 0
}
