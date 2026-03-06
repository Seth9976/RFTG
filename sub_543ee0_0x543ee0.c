// 函数名称: sub_543ee0
// 虚拟地址: 0x543ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_543ee0(int32_t arg1)
{
    // 第一条实际指令: int128_t* result = data_307882c
    int128_t* result = data_307882c
    
    if (*(result + 0x404c) == arg1)
        return result
    
    *(result + 0x404c) = arg1
    int32_t* eax = sub_54b850(&result[0x424], arg1)
    data_307955c(*eax)
    return sub_5abfc0(data_307882c + 0x28, 0xfe, eax[0x40] << 4)
}
