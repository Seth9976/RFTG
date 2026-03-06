// 函数名称: sub_4184d0
// 虚拟地址: 0x4184d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4184d0(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 u< 0x80)
    if (arg3 u< 0x80)
        *arg1 = arg3.b
        return &arg1[1]
    
    if (arg3 u< 0x800)
        uint8_t edx_1 = (arg3 u>> 6).b
        arg3.b &= 0x3f
        arg3.b |= 0x80
        *arg1 = edx_1 | 0xc0
        arg1[1] = arg3.b
        return &arg1[2]
    
    if (arg3 u< 0x10000)
        *arg1 = (arg3 u>> 0xc).b | 0xe0
        uint8_t edx_4 = (arg3 u>> 6).b & 0x3f
        arg3.b &= 0x3f
        arg3.b |= 0x80
        arg1[1] = edx_4 | 0x80
        arg1[2] = arg3.b
        return &arg1[3]
    
    *arg1 = (arg3 u>> 0x12).b | 0xf0
    arg1[1] = ((arg3 u>> 0xc).b & 0x3f) | 0x80
    uint8_t edx_9 = (arg3 u>> 6).b & 0x3f
    arg3.b &= 0x3f
    arg1[2] = edx_9 | 0x80
    arg3.b |= 0x80
    arg1[3] = arg3.b
    return &arg1[4]
}
