// 函数名称: sub_5c2df0
// 虚拟地址: 0x5c2df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HANDLEsub_5c2df0(void* arg1)
{
    // 第一条实际指令: return CreateFileW(*(arg1 + 0x1c), 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr)
    return CreateFileW(*(arg1 + 0x1c), 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
        OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr)
}
