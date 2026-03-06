// 函数名称: sub_424ca0
// 虚拟地址: 0x424ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424ca0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0xffffffff)
    if (arg1 != 0xffffffff)
        return *((*sub_46b2b0(arg1) << 2) + &data_c020d8)
    
    return *((arg1 << 2) + &data_c020d8)
}
