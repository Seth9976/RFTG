// 函数名称: sub_49d660
// 虚拟地址: 0x49d660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_49d660(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    int32_t i = 0
    
    if (0 s< *(arg1 + 0x460))
        result = arg1 + 0x465
        
        do
            *(result + 1) = *(result - 1)
            *(result + 2) = *result
            *(result + 0x11) = *(result + 0xf)
            *(result + 3) &= 0xbf
            i += 1
            result += 0x14
        while (i s< sx.d(*(arg1 + 0x460)))
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x458) s> 0)
        result = arg1 + 0x62
        
        do
            *(result - 0x25) = 0
            *result = 0
            *(result - 0x12) = *(result - 0x22)
            *(result - 0x10) = *(result - 0x20)
            *(result - 0xe) = *(result - 0x1e)
            *(result - 0xc) = *(result - 0x1c)
            *(result - 0xa) = *(result - 0x1a)
            *(result - 8) = *(result - 0x18)
            *(result - 6) = *(result - 0x16)
            *(result - 4) = *(result - 0x14)
            i_1 += 1
            result += 0xb4
        while (i_1 s< sx.d(*(arg1 + 0x458)))
    
    return result
}
