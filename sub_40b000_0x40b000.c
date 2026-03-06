// 函数名称: sub_40b000
// 虚拟地址: 0x40b000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_40b000(char arg1, int32_t, void* arg3)
{
    // 第一条实际指令: if (*(arg3 + 0xc4) != arg1)
    if (*(arg3 + 0xc4) != arg1)
        *(arg3 + 0xc4) = arg1
    
    void* result = data_27e7a40
    *(result + 0x57c) = 0x1010000
    *(result + 0x580) = 0
    *(result + 0x598) = 0x1010000
    *(result + 0x59c) = 0
    *(result + 0x5b4) = 0x1010000
    *(result + 0x5b8) = 0
    *(result + 0x5d0) = 0x1010000
    *(result + 0x5d4) = 0
    *(result + 0x5ec) = 0x1010000
    *(result + 0x5f0) = 0
    *(result + 0x608) = 0x1010000
    *(result + 0x60c) = 0
    *(result + 0x624) = 0x1010000
    *(result + 0x628) = 0
    return result
}
