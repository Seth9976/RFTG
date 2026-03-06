// 函数名称: sub_666820
// 虚拟地址: 0x666820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_666820(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t edi = 1
    
    if ((*(esi + 0x100) & 0x20000000) == 0)
        if ((*(esi + 0x70) & 0x800) != 0)
            edi = 0
    else if ((*(esi + 0x70) & 0x300) == 0x300)
        edi = 0
    
    *(esi + 0x2ac) = 0x81
    sub_664410(esi, &arg1, 4)
    
    if (edi == 0)
        return 0
    
    int16_t eax_3 = arg1.w
    int32_t result
    result.b =
        (((((zx.d(eax_3.b) << 8) + zx.d(eax_3:1.b)) << 8) + zx.d(arg1:2.b)) << 8) + zx.d(arg1:3.b)
        != *(esi + 0x124)
    return result
}
