// 函数名称: zip_source_keep
// 虚拟地址: 0x5c1c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*zip_source_keep(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x30) += 1
    *(arg1 + 0x30) += 1
    return arg1
}
