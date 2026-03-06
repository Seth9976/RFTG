// 函数名称: sub_5cff20
// 虚拟地址: 0x5cff20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5cff20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_24
    int32_t var_24
    __builtin_memcpy(&var_24, 
        "\x01\x00\x00\x00\x03\x00\x00\x00\x02\x00\x00\x00\x06\x00\x00\x00\x04\x00\x00\x00\x0c\x00\x00\x00\x"
    "08\x00\x00\x00\x09\x00\x00\x00", 
        0x20)
    int32_t result
    
    if (arg1.w != 0xffff)
        uint32_t edx_5 = (arg1 + 0x8ca) u% 0x8ca0 u/ 0x1194
        
        if (edx_5 u< 8)
            result.b = (&var_24)[edx_5].b
            return result
    
    result.b = 0
    return result
}
