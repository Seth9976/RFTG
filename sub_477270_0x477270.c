// 函数名称: sub_477270
// 虚拟地址: 0x477270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_477270()
{
    // 第一条实际指令: void* eax = data_27e7a40
    void* eax = data_27e7a40
    *(eax + 0x2c4960) = 0
    
    if (data_307d9c0 == 1 && (*(eax + 0x20) != 2 || *(eax + 0x24) != 8))
        data_307cd08 = 0
        data_307d9c0 = 0
    
    data_27c05f4 = 4
    uint32_t result = sub_40a050()
    data_307cd08 = 0
    return result
}
