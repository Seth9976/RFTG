// 函数名称: sub_438700
// 虚拟地址: 0x438700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_438700(void* arg1)
{
    // 第一条实际指令: int128_t* result = sub_463e80(*(data_27e7a40 + 0x548) + 0x43960)
    int128_t* result = sub_463e80(*(data_27e7a40 + 0x548) + 0x43960)
    *result = 4
    *(result + 0x84) = *(arg1 + 0x84)
    *(result + 0x64) = *(arg1 + 0x64)
    *(result + 0x68) = *(arg1 + 0x68)
    *(result + 0x6c) = *(arg1 + 0x6c)
    *(result + 0x58) = *(arg1 + 0x58)
    *(result + 0x5c) = *(arg1 + 0x5c)
    result[6].d = *(arg1 + 0x60)
    __builtin_memcpy(result + 0xc, arg1 + 0xc, 0x20)
    return result
}
