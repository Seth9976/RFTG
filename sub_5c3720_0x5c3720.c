// 函数名称: sub_5c3720
// 虚拟地址: 0x5c3720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c3720(int32_t arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: if (arg1 u< 0x80)
    if (arg1 u< 0x80)
        *arg3 = arg1.b
        return 1
    
    if (arg1 u< 0x800)
        uint8_t edx_1 = (arg1 u>> 6).b & 0x1f
        arg1.b &= 0x3f
        arg1.b |= 0x80
        arg3[1] = arg1.b
        *arg3 = edx_1 | 0xc0
        return 2
    
    if (arg1 u< 0x10000)
        *arg3 = ((arg1 u>> 0xc).b & 0xf) | 0xe0
        uint8_t edx_4 = (arg1 u>> 6).b & 0x3f
        arg1.b &= 0x3f
        arg1.b |= 0x80
        arg3[2] = arg1.b
        arg3[1] = edx_4 | 0x80
        return 3
    
    *arg3 = ((arg1 u>> 0x12).b & 7) | 0xf0
    arg3[1] = ((arg1 u>> 0xc).b & 0x3f) | 0x80
    uint8_t edx_9 = (arg1 u>> 6).b
    arg1.b &= 0x3f
    arg1.b |= 0x80
    arg3[3] = arg1.b
    arg3[2] = (edx_9 & 0x3f) | 0x80
    return 4
}
