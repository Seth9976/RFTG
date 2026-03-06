// 函数名称: sub_5afb13
// 虚拟地址: 0x5afb13
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5afb13(int32_t arg1)
{
    // 第一条实际指令: return LeaveCriticalSection((&data_3166ee0)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 0xc)
    return LeaveCriticalSection((&data_3166ee0)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 0xc)
}
