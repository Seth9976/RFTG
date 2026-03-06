// 函数名称: sub_5c0ee0
// 虚拟地址: 0x5c0ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c0ee0(int32_t arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t ebx
    ebx.b = esi == 0
    
    if (esi != 0)
    label_5c0f06:
        char* result = sub_5a881a(0x18)
        
        if (result != 0)
            *(result + 8) = arg2
            *(result + 4) = esi
            result[1] = ebx.b
            *result = 1
            *(result + 0xc) = arg3
            *(result + 0x10) = 0
            *(result + 0x14) = 0
            return result
        
        if (ebx.b != 0)
            __free_base(esi)
    else
        esi = sub_5a881a(arg2)
        
        if (esi != 0)
            goto label_5c0f06
    
    return 0
}
