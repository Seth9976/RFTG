// 函数名称: sub_4d2b50
// 虚拟地址: 0x4d2b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4d2b50(int32_t arg1, void* arg2 @ edi, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* result = sub_4d2b00(arg1)
    void* result = sub_4d2b00(arg1)
    int32_t entry_ebx
    
    if (result == 0)
        result = sub_4d3000()
        *(result + 4) = arg3
        *(result + 8) = arg4
        *result = arg1
        *(result + 0x1c) = entry_ebx
        
        if (arg2 != 0)
            *(result + 0xc) = *(arg2 + 0xfe4)
            *(result + 0x10) = *(arg2 + 0xfe8)
            *(result + 0x14) = *(arg2 + 0xfec)
            *(result + 0x18) = *(arg2 + 0xff0)
            return result
        
        *(result + 0xc) = 0
        *(result + 0x10) = 0
        *(result + 0x14) = 0
        *(result + 0x18) = 0
    else if (entry_ebx != *(result + 0x1c))
        return sub_4c57f0("VoipBounceClientAdd didn't match")
    return result
}
