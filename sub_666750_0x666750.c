// 函数名称: sub_666750
// 虚拟地址: 0x666750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_666750(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = *(arg1 + 0x141)
    
    if (result.b u< 8)
        uint32_t edi_1 = zx.d(result.b)
        *(arg1 + 0x2ac) = 0x11
        sub_664410(arg1, edi_1 + arg2 + 0x20, 8 - edi_1)
        *(arg1 + 0x141) = 8
        result = sub_6620f0(arg2 + 0x20, edi_1, 8 - edi_1)
        
        if (result != 0)
            if (edi_1 u< 4 && sub_6620f0(arg2 + 0x20, edi_1, 8 - edi_1 - 4) != 0)
                sub_664320(arg1, "Not a PNG file")
                noreturn
            
            sub_664320(arg1, "PNG file corrupted by ASCII conversion")
            noreturn
        
        if (edi_1 u< 3)
            *(arg1 + 0x6c) |= 0x1000
    
    return result
}
