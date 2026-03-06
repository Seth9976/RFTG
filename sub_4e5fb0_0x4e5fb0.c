// 函数名称: sub_4e5fb0
// 虚拟地址: 0x4e5fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e5fb0()
{
    // 第一条实际指令: sub_5abfc0(data_27e7fe4, 0, 0x30)
    sub_5abfc0(data_27e7fe4, 0, 0x30)
    int32_t result = (*(*data_27e7fd0 + 0x40))()
    
    if (*(data_27e7fd0 + 0x27) != 0)
        result = sub_54f6b0()
    
    int32_t esi = data_27e7fe4
    __builtin_memcpy(esi + 0x30, esi, 0x30)
    return result
}
