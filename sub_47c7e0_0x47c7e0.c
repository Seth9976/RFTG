// 函数名称: sub_47c7e0
// 虚拟地址: 0x47c7e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_47c7e0()
{
    // 第一条实际指令: int32_t eax = data_307ca58
    int32_t eax = data_307ca58
    data_30d7278 = 1
    data_30d6f38 = eax
    uint32_t result = sub_4021f0()
    
    if (*(data_27e7a40 + 0x20) != 2)
        return result
    
    return sub_4023f0(1)
}
