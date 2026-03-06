// 函数名称: sub_5bc4fe
// 虚拟地址: 0x5bc4fe
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5bc4fe(int32_t arg1, int32_t arg2) __pure
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if ((arg2.b & 0x10) != 0)
        result = 0x80
    
    if ((arg2.b & 8) != 0)
        result |= 0x200
    
    if ((arg2.b & 4) != 0)
        result |= 0x400
    
    if ((arg2.b & 2) != 0)
        result |= 0x800
    
    if ((arg2.b & 1) != 0)
        result |= 0x1000
    
    if ((arg2 & 0x80000) != 0)
        result |= 0x100
    
    int32_t ecx_1 = arg2 & 0x300
    
    if (ecx_1 != 0)
        if (ecx_1 == 0x100)
            result |= 0x2000
        else if (ecx_1 == 0x200)
            result |= 0x4000
        else if (ecx_1 == 0x300)
            result |= 0x6000
    
    int32_t edx = arg2 & 0x3000000
    
    if (edx == 0x1000000)
        return result | 0x8040
    
    if (edx == 0x2000000)
        return result | 0x40
    
    if (edx != 0x3000000)
        return result
    
    return result | 0x8000
}
